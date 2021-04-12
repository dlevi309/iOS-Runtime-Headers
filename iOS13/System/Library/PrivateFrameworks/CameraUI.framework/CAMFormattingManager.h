/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMFormattingManager : NSObject {

	BOOL _wantsCustomKerning;
	BOOL _supportsVerticalText;

}

@property (nonatomic,readonly) BOOL wantsCustomKerning;                //@synthesize wantsCustomKerning=_wantsCustomKerning - In the implementation block
@property (nonatomic,readonly) BOOL supportsVerticalText;              //@synthesize supportsVerticalText=_supportsVerticalText - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)wantsCustomKerning;
-(void)_commonCAMFormattingManagerInitialization;
-(BOOL)supportsVerticalText;
@end

