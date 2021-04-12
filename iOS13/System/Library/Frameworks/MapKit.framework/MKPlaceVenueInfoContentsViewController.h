/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)venueInfoContentsViewControllerWithMapItem:(id)arg1 ;
+(BOOL)isVisibleWithMapItem:(id)arg1 ;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(id)initWithVenueContents:(id)arg1 ;
-(id<GEOMapItemVenueContents>)venueContents;
-(id)labelWithTitle:(id)arg1 ;
-(id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2 ;
-(void)updateLabelsProperties;
-(void)setVenueContents:(id<GEOMapItemVenueContents>)arg1 ;
@end

