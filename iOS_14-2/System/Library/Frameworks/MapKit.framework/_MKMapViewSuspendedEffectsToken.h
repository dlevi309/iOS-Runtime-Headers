/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/_MKMapViewSuspendedEffectsToken.h>

@protocol _MKMapViewSuspendedEffectsToken <NSObject>
@required
-(void)invalidate;

@end


@class MKMapView, NSString;

@interface _MKMapViewSuspendedEffectsToken : NSObject <_MKMapViewSuspendedEffectsToken> {

	BOOL _invalidated;
	MKMapView* _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
@end

