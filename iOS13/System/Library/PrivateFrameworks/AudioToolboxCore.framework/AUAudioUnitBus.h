/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
@class AVAudioFormat, NSArray, NSString, AUAudioUnit;

@interface AUAudioUnitBus : NSObject {

	BOOL _removingObserverWithContext;
	AVAudioFormat* _format;
	NSArray* _supportedChannelCounts;
	unsigned _maximumChannelCount;
	BOOL _enabled;
	BOOL _shouldAllocateBuffer;
	NSString* _name;
	unsigned long long _index;
	long long _busType;
	AUAudioUnit* _ownerAudioUnit;
	NSArray* _supportedChannelLayoutTags;
	double _contextPresentationLatency;
	vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> >* _observers;

}

@property (assign,nonatomic) vector<BusPropertyObserver observers;                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) AVAudioFormat * format; 
@property (assign,nonatomic) BOOL shouldAllocateBuffer;                                //@synthesize shouldAllocateBuffer=_shouldAllocateBuffer - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                               //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long busType;                                      //@synthesize busType=_busType - In the implementation block
@property (nonatomic,readonly) AUAudioUnit * ownerAudioUnit;                           //@synthesize ownerAudioUnit=_ownerAudioUnit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedChannelLayoutTags;              //@synthesize supportedChannelLayoutTags=_supportedChannelLayoutTags - In the implementation block
@property (assign,nonatomic) double contextPresentationLatency;                        //@synthesize contextPresentationLatency=_contextPresentationLatency - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(unsigned long long)index;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(BOOL)isEnabled;
-(AVAudioFormat *)format;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setObservers:(vector<BusPropertyObserver)arg1 ;
-(vector<BusPropertyObserver)observers;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(NSArray *)supportedChannelLayoutTags;
-(long long)busType;
-(AUAudioUnit *)ownerAudioUnit;
-(void)setOwnerAudioUnit:(AUAudioUnit *)arg1 ;
-(void)setBusType:(long long)arg1 ;
-(id)initWithFormat:(id)arg1 error:(id*)arg2 ;
-(void)setSupportedChannelCounts:(id)arg1 ;
-(id)supportedChannelCounts;
-(unsigned)maximumChannelCount;
-(void)setMaximumChannelCount:(unsigned)arg1 ;
-(BOOL)shouldAllocateBuffer;
-(void)setShouldAllocateBuffer:(BOOL)arg1 ;
-(double)contextPresentationLatency;
-(void)setContextPresentationLatency:(double)arg1 ;
@end

