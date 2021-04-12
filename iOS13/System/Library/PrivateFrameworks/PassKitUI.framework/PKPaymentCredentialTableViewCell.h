/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(id)detailTextLabelColor;
-(void)setSnapshotImageHasBorder:(BOOL)arg1 ;
-(UILabel *)credentialDetailLabel;
-(UIImageView *)snapshotImageView;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(BOOL)showingPlaceholder;
-(BOOL)snapshotImageHasBorder;
@end

