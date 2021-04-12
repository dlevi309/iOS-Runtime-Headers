/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@interface AAAccessSessionManager : NSObject {

	 accessSessionManager;

}

@property (readonly,nonatomic) BOOL isActive; 
-(id)init;
-(BOOL)isActive;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 ;
-(void)pushSessionData:(id)arg1 ;
-(void)pushSessionData:(id)arg1 submitEventQueues:(BOOL)arg2 ;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(BOOL)arg3 ;
@end

