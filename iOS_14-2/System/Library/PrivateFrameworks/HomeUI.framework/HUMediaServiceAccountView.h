/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UIImageView, UILabel, NSArray, NSString;

@interface HUMediaServiceAccountView : UIView <HUCellProtocol> {

	BOOL _iconImageLoadingInProgress;
	HFItem* _item;
	UIImageView* _iconView;
	UILabel* _serviceNameLabel;
	UILabel* _accountHandleLabel;
	NSArray* _currentConstraints;

}

@property (nonatomic,retain) UIImageView * iconView;                                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * serviceNameLabel;                                       //@synthesize serviceNameLabel=_serviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * accountHandleLabel;                                     //@synthesize accountHandleLabel=_accountHandleLabel - In the implementation block
@property (assign) BOOL iconImageLoadingInProgress;                                            //@synthesize iconImageLoadingInProgress=_iconImageLoadingInProgress - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                                     //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSArray *)currentConstraints;
-(void)setItem:(HFItem *)arg1 ;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setServiceNameLabel:(UILabel *)arg1 ;
-(UILabel *)serviceNameLabel;
-(void)setAccountHandleLabel:(UILabel *)arg1 ;
-(UILabel *)accountHandleLabel;
-(void)_loadServiceIconImage;
-(BOOL)iconImageLoadingInProgress;
-(void)setIconImageLoadingInProgress:(BOOL)arg1 ;
@end

