/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject {

	NSMutableDictionary* _services;

}

@property (nonatomic,readonly) NSArray * allServices; 
+(id)sharedInstance;
-(void)registerSessionClassWithBundle:(id)arg1 ;
-(id)init;
-(id)serviceWithName:(id)arg1 ;
-(NSArray *)allServices;
-(void)dealloc;
@end

