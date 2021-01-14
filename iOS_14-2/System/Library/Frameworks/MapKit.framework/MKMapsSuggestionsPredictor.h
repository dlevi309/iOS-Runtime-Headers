/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapsSuggestionsPredictor.h>

@protocol MKMapsSuggestionsPredictor <NSObject>
@required
-(BOOL)transportModeForDestinationMapItemData:(id)arg1 originCoordinateData:(id)arg2 handler:(/*^block*/id)arg3;
-(BOOL)transportModeForDestinationEntryData:(id)arg1 originCoordinateData:(id)arg2 handler:(/*^block*/id)arg3;

@end


@protocol OS_dispatch_queue, OS_dispatch_source, MKMapsSuggestionsSignalPackCacheInterface;
@class NSObject, NSXPCConnection, NSString;

@interface MKMapsSuggestionsPredictor : NSObject <MKMapsSuggestionsPredictor> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _closeTimer;
	id<MKMapsSuggestionsSignalPackCacheInterface> _signalPackCacheInterface;

}

@property (nonatomic,retain) id<MKMapsSuggestionsSignalPackCacheInterface> signalPackCacheInterface;              //@synthesize signalPackCacheInterface=_signalPackCacheInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPredictor;
-(id)init;
-(void)_closeConnection;
-(BOOL)transportModeForDestinationMapItemData:(id)arg1 originCoordinateData:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id<MKMapsSuggestionsSignalPackCacheInterface>)signalPackCacheInterface;
-(void)_unscheduleCloseConnection;
-(BOOL)_openConnectionIfNecessary;
-(id)NSDataToMKMapsSuggestionsTransportModes:(id)arg1 error:(id*)arg2 ;
-(void)_scheduleCloseConnection;
-(void)_initCloseTimerIfNecessary;
-(void)setSignalPackCacheInterface:(id<MKMapsSuggestionsSignalPackCacheInterface>)arg1 ;
-(BOOL)transportModeForDestinationEntryData:(id)arg1 originCoordinateData:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

