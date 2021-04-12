/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UIImageView, UILabel;

@interface PKPaymentCredentialTableViewCell : PKTableViewCell {

	BOOL _showingPlaceholder;
	BOOL _snapshotImageHasBorder;
	UIImageView* _snapshotImageView;
	UILabel* _credentialDetailLabel;

}

@property (nonatomic,readonly) UIImageView * snapshotImageView;              //@synthesize snapshotImageView=_snapshotImageView - In the implementation block
@property (nonatomic,readonly) UILabel * credentialDetailLabel;              //@synthesize credentialDetailLabel=_credentialDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL showingPlaceholder;                        //@synthesize showingPlaceholder=_showingPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL snapshotImageHasBorder;                    //@synthesize snapshotImageHasBorder=_snapshotImageHasBorder - In the implementation block
+(CGSize)defaultImageViewSize;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)snapshotImageView;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(BOOL)showingPlaceholder;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(id)detailTextLabelColor;
-(void)setSnapshotImageHasBorder:(BOOL)arg1 ;
-(UILabel *)credentialDetailLabel;
-(BOOL)snapshotImageHasBorder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

