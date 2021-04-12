/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class CLGeocoder, NSMapTable, GeocodeRequest, Reachability, NSRecursiveLock;

@interface QueuedGeocoder : NSObject {

	double _placemarkDifferentationDistance;
	CLGeocoder* _geocoder;
	NSMapTable* _locationToPlacemarksMap;
	NSMapTable* _locationToResultMap;
	GeocodeRequest* _currentRequest;
	Reachability* _reachability;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) CLGeocoder * geocoder;                               //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,retain) NSMapTable * locationToPlacemarksMap;                //@synthesize locationToPlacemarksMap=_locationToPlacemarksMap - In the implementation block
@property (nonatomic,retain) NSMapTable * locationToResultMap;                    //@synthesize locationToResultMap=_locationToResultMap - In the implementation block
@property (nonatomic,retain) GeocodeRequest * currentRequest;                     //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) Reachability * reachability;                         //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                              //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) double placemarkDifferentationDistance;              //@synthesize placemarkDifferentationDistance=_placemarkDifferentationDistance - In the implementation block
+(id)sharedGeocoder;
-(id)init;
-(NSRecursiveLock *)lock;
-(id)_init;
-(GeocodeRequest *)currentRequest;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentRequest:(GeocodeRequest *)arg1 ;
-(Reachability *)reachability;
-(void)setReachability:(Reachability *)arg1 ;
-(CLGeocoder *)geocoder;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(void)dequeueRequest;
-(void)setLocationToPlacemarksMap:(NSMapTable *)arg1 ;
-(void)setLocationToResultMap:(NSMapTable *)arg1 ;
-(void)setPlacemarkDifferentationDistance:(double)arg1 ;
-(NSMapTable *)locationToPlacemarksMap;
-(double)placemarkDifferentationDistance;
-(NSMapTable *)locationToResultMap;
@end

