/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;
@class MKPlaceTextBlockCell, NSMutableArray, NSString;

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _textBlockExpanded;
	MKPlaceTextBlockCell* _textCell;
	NSMutableArray* _factoidCells;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;
	id<MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;

}

@property (nonatomic,retain) id<GEOEncyclopedicInfo> encyclopedicInfo;                                                         //@synthesize encyclopedicInfo=_encyclopedicInfo - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;              //@synthesize encyclopedicControllerDelegate=_encyclopedicControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEncyclopedicInfo:(id<GEOEncyclopedicInfo>)arg1 ;
-(void)setEncyclopedicControllerDelegate:(id<MKPlaceCardEncyclopedicControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)_factoids;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(void)_updateViews;
-(id)_textBlockTitle;
-(void)_viewEncyclopedicContent;
-(id)_textBlockText;
-(id<MKPlaceCardEncyclopedicControllerDelegate>)encyclopedicControllerDelegate;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)draggableContent;
@end

