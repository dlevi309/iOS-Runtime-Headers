/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/


@protocol PRXCardContentProviding <NSObject>
@property (nonatomic,readonly) long long cardStyle; 
@property (nonatomic,readonly) BOOL allowsPullToDismiss; 
@optional
-(long long)cardStyle;
-(void)updatePreferredContentSizeForCardWidth:(double)arg1;
-(BOOL)allowsPullToDismiss;

@end

