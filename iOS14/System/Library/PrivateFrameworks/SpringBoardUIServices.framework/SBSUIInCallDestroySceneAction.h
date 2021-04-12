/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface SBSUIInCallDestroySceneAction : BSAction

@property (nonatomic,copy,readonly) NSString * analyticsSource; 
@property (nonatomic,readonly) long long destructionReason; 
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)initWithDestructionReason:(long long)arg1 analyticsSource:(id)arg2 timeout:(double)arg3 withResponseHandler:(/*^block*/id)arg4 ;
-(long long)destructionReason;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(NSString *)analyticsSource;
@end

