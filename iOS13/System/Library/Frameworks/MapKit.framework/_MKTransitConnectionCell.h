/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;
@class _MKUILabel, MKTransitInfoLabelView, UIButton, NSLayoutConstraint;

@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _nameLabel;
	MKTransitInfoLabelView* _transitInfoLabel;
	UIButton* _button;
	NSLayoutConstraint* _nameLabelToTopConstraint;
	NSLayoutConstraint* _transitInfoToNameConstraint;
	id<GEOTransitConnectionInfo> _connectionInfo;
	id<_MKTransitConnectionCellDelegate> _delegate;

}

@property (nonatomic,retain) id<GEOTransitConnectionInfo> connectionInfo;                       //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic,__weak) id<_MKTransitConnectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_MKTransitConnectionCellDelegate>)delegate;
-(void)setDelegate:(id<_MKTransitConnectionCellDelegate>)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setConnectionInfo:(id<GEOTransitConnectionInfo>)arg1 ;
-(id<GEOTransitConnectionInfo>)connectionInfo;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)_buttonSelected;
@end

