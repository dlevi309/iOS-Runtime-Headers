/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@protocol TUStateRestoreControllerType
@property (readonly,nonatomic) BOOL isStateRestorationAllowed; 
@property (readonly,nonatomic) BOOL isStateRestorationFeatureEnabled; 
@property (readonly,nonatomic) BOOL hasStateDiscarded; 
@required
-(void)sceneDidEnterBackground;
-(BOOL)isStateRestorationFeatureEnabled;
-(BOOL)isStateRestorationAllowed;
-(BOOL)hasStateDiscarded;
-(void)markStateDiscarded;
-(void)navigationDidHappen;

@end

