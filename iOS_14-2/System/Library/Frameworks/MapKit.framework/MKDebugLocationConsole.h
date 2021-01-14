/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UILabel.h>

@class MKMapView, NSTimer, NSString, UIColor, NSDateFormatter;

@interface MKDebugLocationConsole : UILabel {

	MKMapView* _parentMapView;
	NSTimer* _updateTimer;
	unsigned long long _pageIndex;
	NSString* _customText;
	UIColor* _customTextColor;
	BOOL _customTextEnabled;
	NSDateFormatter* _timeStampFormatter;

}

@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) BOOL customTextEnabled;                    //@synthesize customTextEnabled=_customTextEnabled - In the implementation block
-(id)initWithMapView:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(unsigned long long)pageIndex;
-(void)update;
-(void)updateFrameWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_debugViewFrameWithMapView:(id)arg1 ;
-(void)_consoleTapped:(id)arg1 ;
-(void)_updateGPSInfo;
-(void)_updateVehicleInfo;
-(void)_updateCustomText;
-(void)_showNextPage;
-(id)timeStampFormatter;
-(void)updateCustomText:(id)arg1 textColor:(id)arg2 ;
-(BOOL)customTextEnabled;
-(void)setCustomTextEnabled:(BOOL)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
@end

