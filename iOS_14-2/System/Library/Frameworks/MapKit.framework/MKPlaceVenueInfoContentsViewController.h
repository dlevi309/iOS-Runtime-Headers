/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOMapItemVenueContents;
@class NSArray, NSString;

@interface MKPlaceVenueInfoContentsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	id<GEOMapItemVenueContents> _venueContents;
	NSArray* _labels;

}

@property (nonatomic,retain) id<GEOMapItemVenueContents> venueContents;              //@synthesize venueContents=_venueContents - In the implementation block
@property (nonatomic,retain) NSArray * labels;                                       //@synthesize labels=_labels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isVisibleWithMapItem:(id)arg1 ;
+(id)venueInfoContentsViewControllerWithMapItem:(id)arg1 ;
-(void)setLabels:(NSArray *)arg1 ;
-(id)initWithVenueContents:(id)arg1 ;
-(id<GEOMapItemVenueContents>)venueContents;
-(void)_addPaddingRowToRows:(id)arg1 ;
-(id)labelWithTitle:(id)arg1 ;
-(id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2 ;
-(void)updateLabelsProperties;
-(void)setVenueContents:(id<GEOMapItemVenueContents>)arg1 ;
-(NSArray *)labels;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(void)_updateRows;
-(id)_labelFont;
@end

