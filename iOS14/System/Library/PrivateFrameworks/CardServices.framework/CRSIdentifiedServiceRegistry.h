/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
*/


@class NSMutableOrderedSet;

@interface CRSIdentifiedServiceRegistry : NSObject {

	NSMutableOrderedSet* _identifiedServices;

}
+(id)sharedInstance;
-(id)init;
-(void)registerIdentifiedService:(id)arg1 ;
-(id)identifiedServices;
@end

