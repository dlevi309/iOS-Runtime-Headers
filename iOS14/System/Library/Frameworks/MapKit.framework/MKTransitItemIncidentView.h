/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKTransitItemIncidentView.h>

@protocol MKTransitItemIncidentView <NSObject>
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom; 
@required
-(long long)position;
-(void)setPosition:(long long)arg1;
-(BOOL)padBottom;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4;
-(void)setPadBottom:(BOOL)arg1;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4;
-(void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5;

@end


@class UIImageView, NSArray, _MKUILabel, MKTransitIncidentItemCellBackgroundView, NSLayoutConstraint, NSString;

@interface MKTransitItemIncidentView : UIView <MKTransitItemIncidentView> {

	UIImageView* _incidentIconImageView;
	BOOL _needsConstraintsRebuild;
	NSArray* _constraints;
	_MKUILabel* _titleLabel;
	_MKUILabel* _lastUpdatedLabel;
	MKTransitIncidentItemCellBackgroundView* _backgroundView;
	BOOL _incidentIsBlocking;
	BOOL _useCondensedWidthLayout;
	NSLayoutConstraint* _titleLabelToTopConstraint;
	NSLayoutConstraint* _bottomToLabelConstraint;
	NSLayoutConstraint* _titleToLastUpdatedLabelConstraint;
	NSLayoutConstraint* _bottomToBackgroundConstraint;
	double _bottomToBackgroundOffset;
	BOOL _padBottom;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom;                          //@synthesize padBottom=_padBottom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(long long)position;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)setPosition:(long long)arg1 ;
-(void)infoCardThemeChanged;
-(void)_updateConstraintValues;
-(BOOL)padBottom;
-(void)configureViews;
-(id)_blockingImage;
-(void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(BOOL)arg4 shouldShowImage:(BOOL)arg5 inSiri:(BOOL)arg6 ;
-(id)_nonBlockingImage;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)_updateBottomConstraintWithOffset:(double)arg1 ;
-(void)rebuildConstraints;
-(void)setPadBottom:(BOOL)arg1 ;
-(void)dealloc;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5 ;
@end

