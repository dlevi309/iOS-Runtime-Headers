/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction

@property (nonatomic,retain,readonly) NSDictionary * request; 
-(NSDictionary *)request;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(long long)UIActionType;
-(id)initWithRequest:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

