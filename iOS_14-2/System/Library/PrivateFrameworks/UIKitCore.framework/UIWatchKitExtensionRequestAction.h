/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction

@property (nonatomic,retain,readonly) NSDictionary * request; 
-(void)sendResponse:(id)arg1 ;
-(long long)UIActionType;
-(NSDictionary *)request;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithRequest:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

