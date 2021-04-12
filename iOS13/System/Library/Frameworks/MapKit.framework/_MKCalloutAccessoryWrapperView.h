/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_MKCalloutAccessoryView.h>

@protocol _MKCalloutAccessoryView;
@class UIView, NSString;

@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView> {

	UIView*<_MKCalloutAccessoryView> _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id)initWithView:(id)arg1 ;
-(id)_mapkit_accessoryControlToExtendWithCallout;
@end

