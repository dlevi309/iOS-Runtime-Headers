/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPhotoBigAttributionView.h>
#import <libobjc.A.dylib/MKPhotoBigAttributionViewSubclass.h>

@class _MKUILabel, UIView, NSString;

@interface MKThirdPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass> {

	_MKUILabel* _firstLineLabel;
	_MKUILabel* _secondLineLabel;
	UIView* _labelsView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)firstLineLabelFont;
-(id)secondLineLabelFont;
-(void)updateInfoAttributionString;
-(void)didUpdateMapItem;
-(void)didUpdateAttributionViewType;
-(void)willStartAnimatingActivityIndicatorView;
-(void)didEndAnimatingActivityIndicatorView;
-(id)initWithContext:(long long)arg1 ;
@end

