/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol SVVideoAdProviding <SVVideoProviding,SVVideoSkipThreshold>
@property (nonatomic,readonly) unsigned long long skipThreshold; 
@property (nonatomic,readonly) BOOL hasAction; 
@required
-(BOOL)hasAction;
-(unsigned long long)skipThreshold;
-(void)presentPrivacyStatement;
-(void)skipped;
-(void)presentAction;

@end

