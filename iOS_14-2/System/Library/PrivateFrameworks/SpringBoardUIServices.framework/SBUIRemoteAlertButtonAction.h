/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <BaseBoard/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction

@property (nonatomic,readonly) unsigned long long events; 
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)initWithEvents:(unsigned long long)arg1 ;
-(id)initWithEvents:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)sendResponseWithUnHandledEvents:(unsigned long long)arg1 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(unsigned long long)events;
@end

