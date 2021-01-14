/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKUGCCallToActionViewDelegate;
@class NSMutableArray, NSArray, NSString;

@interface MKUGCCallToActionViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	NSMutableArray* _sectionItemViews;
	NSArray* _callToActionAppearances;
	id<MKUGCCallToActionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKUGCCallToActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * callToActionAppearances;                              //@synthesize callToActionAppearances=_callToActionAppearances - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MKUGCCallToActionViewDelegate>)delegate;
-(void)setCallToActionAppearances:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<MKUGCCallToActionViewDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)_setupCallToActionViewsAnimated:(BOOL)arg1 ;
-(void)_reloadCallToActionViewsAnimated:(BOOL)arg1 ;
-(void)setCallToActionAppearances:(NSArray *)arg1 ;
-(NSArray *)callToActionAppearances;
@end

