/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <BaseBoard/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction

@property (nonatomic,readonly) unsigned long long events; 
-(unsigned long long)events;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)initWithEvents:(unsigned long long)arg1 ;
-(id)initWithEvents:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)sendResponseWithUnHandledEvents:(unsigned long long)arg1 ;
@end

