/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/_PXCompletionHandlerManagerDelegate.h>
#import <libobjc.A.dylib/PXContextualMemoriesSetting.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, CLPlacemark, PXLocationStream, _PXCompletionHandlerManager, CLLocation;

@interface PXContextualMemoriesLocationSetting : NSObject <_PXCompletionHandlerManagerDelegate, PXContextualMemoriesSetting, MKAnnotation> {

	BOOL _monitorsCurrentLocation;
	CLPlacemark* _placemark;
	unsigned long long _locationState;
	PXLocationStream* _locationStream;
	_PXCompletionHandlerManager* _completionHandlerManager;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                                   //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) CLPlacemark * placemark;                                             //@synthesize placemark=_placemark - In the implementation block
@property (assign,nonatomic) unsigned long long locationState;                                    //@synthesize locationState=_locationState - In the implementation block
@property (nonatomic,retain) PXLocationStream * locationStream;                                   //@synthesize locationStream=_locationStream - In the implementation block
@property (nonatomic,retain) _PXCompletionHandlerManager * completionHandlerManager;              //@synthesize completionHandlerManager=_completionHandlerManager - In the implementation block
@property (assign,nonatomic) BOOL monitorsCurrentLocation;                                        //@synthesize monitorsCurrentLocation=_monitorsCurrentLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSString * headerTitle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setSimulatedLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
+(CLLocationCoordinate2D)_simulatedLocationCoordinate;
+(BOOL)automaticallyNotifiesObserversOfCoordinate;
+(id)keyPathsForValuesAffectingPlacemark;
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingSubtitle;
-(NSString *)headerTitle;
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(CLLocation *)location;
-(void)didCallLastCompletionHandlerForCompletionHandlerManager:(id)arg1 ;
-(void)_setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_handleLocationAcquisitionUpdate:(id)arg1 ;
-(void)_initiateLocationAcquisitionWithAccuracy:(double)arg1 ;
-(id)_locationForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_updatePlacemarkWithPlacemarks:(id)arg1 error:(id)arg2 ;
-(void)_updatePlacemarkForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setMonitorsCurrentLocation:(BOOL)arg1 ;
-(void)requestLocationUpdateWithAccuracy:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)locationState;
-(void)setLocationState:(unsigned long long)arg1 ;
-(PXLocationStream *)locationStream;
-(void)setLocationStream:(PXLocationStream *)arg1 ;
-(_PXCompletionHandlerManager *)completionHandlerManager;
-(void)setCompletionHandlerManager:(_PXCompletionHandlerManager *)arg1 ;
-(BOOL)monitorsCurrentLocation;
-(NSString *)subtitle;
-(void)resetToDefault;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLPlacemark *)placemark;
-(NSString *)title;
@end

