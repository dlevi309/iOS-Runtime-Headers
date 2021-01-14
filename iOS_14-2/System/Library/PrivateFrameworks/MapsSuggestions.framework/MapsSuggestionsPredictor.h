/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsPredictor.h>

@protocol MapsSuggestionsPredictor <NSObject,MapsSuggestionsObject>
@optional
-(void)cancelCapturingAnalytics;
-(void)captureActualTransportationMode:(int)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3;
-(void)capturePredictedTransportationMode:(int)arg1;

@required
-(BOOL)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3;
-(BOOL)predictedTransportModeForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3;

@end


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, MapsSuggestionsSignalPackCache, NSString;

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _closeTimer;
	MapsSuggestionsSignalPackCache* _signalPackCache;
	int _tempPredictedTransportMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)sharedPredictor;
-(id)init;
-(NSString *)uniqueName;
-(BOOL)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeSignalPack:(id)arg1 forMapItem:(id)arg2 andEntry:(id)arg3 ;
-(void)cancelCapturingAnalytics;
-(BOOL)predictedTransportModeForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(void)captureActualTransportationMode:(int)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3 ;
-(void)capturePredictedTransportationMode:(int)arg1 ;
-(void)dealloc;
@end

