/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>
#import <libobjc.A.dylib/HUAccessoryViewCellProtocol.h>

@class UIView, HFItem, NAFuture, HUGridActionSetTitleAndDescriptionView, HUGridSceneCellLayoutOptions, HUIconView, HUPieProgressView, NSArray, NSString;

@interface HUGridActionSetCell : HUGridCell <HUAccessoryViewCellProtocol> {

	HFItem* _item;
	NAFuture* _executeActionSetFuture;
	UIView* _accessoryView;
	HUGridActionSetTitleAndDescriptionView* _titleAndDescriptionView;
	HUGridSceneCellLayoutOptions* _sceneCellLayoutOptions;
	HUIconView* _iconView;
	HUPieProgressView* _progressView;
	NSArray* _actionSetCellConstraints;
	NAFuture* _internalExecuteActionSetFuture;

}

@property (nonatomic,retain) HUIconView * iconView;                                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HUGridActionSetTitleAndDescriptionView * titleAndDescriptionView;              //@synthesize titleAndDescriptionView=_titleAndDescriptionView - In the implementation block
@property (nonatomic,retain) HUPieProgressView * progressView;                                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSArray * actionSetCellConstraints;                                            //@synthesize actionSetCellConstraints=_actionSetCellConstraints - In the implementation block
@property (nonatomic,retain) NAFuture * internalExecuteActionSetFuture;                                     //@synthesize internalExecuteActionSetFuture=_internalExecuteActionSetFuture - In the implementation block
@property (nonatomic,retain) NAFuture * executeActionSetFuture;                                             //@synthesize executeActionSetFuture=_executeActionSetFuture - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                        //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic,__weak) HUGridSceneCellLayoutOptions * sceneCellLayoutOptions;                  //@synthesize sceneCellLayoutOptions=_sceneCellLayoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(void)setItem:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(HUPieProgressView *)progressView;
-(void)setProgressView:(HUPieProgressView *)arg1 ;
-(void)_updateLabels;
-(void)_invalidateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setExecuteActionSetFuture:(NAFuture *)arg1 ;
-(void)layoutOptionsDidChange;
-(void)_setupActionSetCell;
-(void)setInternalExecuteActionSetFuture:(NAFuture *)arg1 ;
-(void)setTitleAndDescriptionView:(HUGridActionSetTitleAndDescriptionView *)arg1 ;
-(HUGridActionSetTitleAndDescriptionView *)titleAndDescriptionView;
-(NAFuture *)internalExecuteActionSetFuture;
-(void)_updateLabelsWithTitle:(id)arg1 description:(id)arg2 ;
-(HUGridSceneCellLayoutOptions *)sceneCellLayoutOptions;
-(NSArray *)actionSetCellConstraints;
-(void)setActionSetCellConstraints:(NSArray *)arg1 ;
-(NAFuture *)executeActionSetFuture;
-(void)setSceneCellLayoutOptions:(HUGridSceneCellLayoutOptions *)arg1 ;
@end

