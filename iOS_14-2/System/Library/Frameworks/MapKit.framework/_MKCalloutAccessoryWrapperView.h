/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

