/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <BaseBoard/BSAction.h>

@interface SBSUIHardwareButtonEventSceneAction : BSAction

@property (nonatomic,readonly) long long buttonEventType; 
-(void)sendResponse:(id)arg1 ;
-(long long)buttonEventType;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithButtonEventType:(long long)arg1 timeout:(double)arg2 withResponseHandler:(/*^block*/id)arg3 ;
@end

