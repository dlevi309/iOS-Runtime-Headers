/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


#import <Network/Network-Structs.h>
@class NSString, NSMutableArray, NSArray;

@interface NWAccumulator : NSObject {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _kvo_lock;
	NSString* _name;
	NWAccumulator* _lastSnapshot;
	NSMutableArray* _accumulatedValues;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * accumulatedValues;              //@synthesize accumulatedValues=_accumulatedValues - In the implementation block
@property (nonatomic,readonly) NSArray * accumulations; 
@property (nonatomic,retain) NWAccumulator * lastSnapshot;                    //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
-(id)snapshot;
-(id)dictionaryRepresentation;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)accumulations;
-(id)accumulatedValueForObject:(id)arg1 andKeyPath:(id)arg2 ;
-(void)addAccumulation:(id)arg1 forKey:(id)arg2 stateCallback:(/*^block*/id)arg3 ;
-(void)addAccumulation:(id)arg1 withName:(id)arg2 forKey:(id)arg3 stateCallback:(/*^block*/id)arg4 ;
-(id)awdAccumulator;
-(NSMutableArray *)accumulatedValues;
-(void)registerObserverForKeyPath:(id)arg1 ofObject:(id)arg2 alreadyRegistered:(BOOL)arg3 ;
-(void)setAccumulatedValues:(NSMutableArray *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setLastSnapshot:(NWAccumulator *)arg1 ;
-(id)description;
-(void)reset;
-(void)setName:(NSString *)arg1 ;
-(NWAccumulator *)lastSnapshot;
-(void)dealloc;
@end

