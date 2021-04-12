/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, AUAudioUnit;

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _busses;
	BOOL _countChangeable;
	AUAudioUnit* _ownerAudioUnit;
	long long _busType;
	vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> >* _observers;

}

@property (assign,nonatomic) vector<BusPropertyObserver observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (getter=isCountChangeable,nonatomic,readonly) BOOL countChangeable;              //@synthesize countChangeable=_countChangeable - In the implementation block
@property (nonatomic,readonly) AUAudioUnit * ownerAudioUnit;                               //@synthesize ownerAudioUnit=_ownerAudioUnit - In the implementation block
@property (nonatomic,readonly) long long busType;                                          //@synthesize busType=_busType - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AU46*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObservers:(vector<BusPropertyObserver)arg1 ;
-(vector<BusPropertyObserver)observers;
-(BOOL)setBusCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isCountChangeable;
-(void)addObserverToAllBusses:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserverFromAllBusses:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(long long)busType;
-(AUAudioUnit *)ownerAudioUnit;
-(void)replaceBusses:(id)arg1 ;
-(id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 ;
-(id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 busses:(id)arg3 ;
-(void)indexBusses;
@end

