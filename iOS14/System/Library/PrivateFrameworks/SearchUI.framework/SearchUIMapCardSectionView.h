/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKLabel, MKPinAnnotationView, UITapGestureRecognizer, CLPlacemark, TLKStackView, TLKImageView, MKMapSnapshotter, SFMapCardSection, NSString;

@interface SearchUIMapCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {

	TLKLabel* _footnoteDescriptorLabel;
	TLKLabel* _footnoteLabel;
	MKPinAnnotationView* _pinAnnotationView;
	UITapGestureRecognizer* _tapRecognizer;
	CLPlacemark* _currentPlacemark;
	TLKStackView* _labelsStackView;
	TLKImageView* _snapshotView;
	MKMapSnapshotter* _mapSnapshotter;

}

@property (nonatomic,readonly) SFMapCardSection * section; 
@property (nonatomic,retain) TLKLabel * footnoteDescriptorLabel;                   //@synthesize footnoteDescriptorLabel=_footnoteDescriptorLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * footnoteLabel;                             //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) MKPinAnnotationView * pinAnnotationView;              //@synthesize pinAnnotationView=_pinAnnotationView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;               //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) CLPlacemark * currentPlacemark;                       //@synthesize currentPlacemark=_currentPlacemark - In the implementation block
@property (nonatomic,retain) TLKStackView * labelsStackView;                       //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,retain) TLKImageView * snapshotView;                          //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) MKMapSnapshotter * mapSnapshotter;                    //@synthesize mapSnapshotter=_mapSnapshotter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_postalAddressFromPlacemark:(id)arg1 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(TLKImageView *)snapshotView;
-(void)_mapButtonPressed;
-(void)setFootnoteDescriptorLabel:(TLKLabel *)arg1 ;
-(void)updateMapAppearance;
-(MKMapSnapshotter *)mapSnapshotter;
-(id)_clLocationFromSFLatLng:(id)arg1 ;
-(void)setMapSnapshotter:(MKMapSnapshotter *)arg1 ;
-(TLKLabel *)footnoteDescriptorLabel;
-(void)sendMapFeedbackWithTriggerEvent:(unsigned long long)arg1 placemarkData:(id)arg2 ;
-(id)_uiColorFromSFColor:(id)arg1 ;
-(MKPinAnnotationView *)pinAnnotationView;
-(void)setPinAnnotationView:(MKPinAnnotationView *)arg1 ;
-(CLPlacemark *)currentPlacemark;
-(void)setCurrentPlacemark:(CLPlacemark *)arg1 ;
-(void)setLabelsStackView:(TLKStackView *)arg1 ;
-(void)setFootnoteLabel:(TLKLabel *)arg1 ;
-(void)setSnapshotView:(TLKImageView *)arg1 ;
-(TLKLabel *)footnoteLabel;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(TLKStackView *)labelsStackView;
-(void)_updateSnapshot:(CGSize)arg1 ;
-(id)setupContentView;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)dealloc;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

