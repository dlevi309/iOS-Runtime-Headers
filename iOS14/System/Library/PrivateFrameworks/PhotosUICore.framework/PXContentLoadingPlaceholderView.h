/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface PXContentLoadingPlaceholderView : UIView {

	NSString* _statusMessage;
	UILabel* _statusLabel;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UILabel * statusLabel;                            //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,copy) NSString * statusMessage;                           //@synthesize statusMessage=_statusMessage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)_setupSubviews;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusMessage:(NSString *)arg1 ;
-(NSString *)statusMessage;
-(void)_updateStatusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

