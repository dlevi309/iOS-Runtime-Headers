/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

