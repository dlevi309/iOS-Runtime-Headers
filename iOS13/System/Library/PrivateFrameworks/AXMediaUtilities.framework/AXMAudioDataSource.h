/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSArray, NSString;

@interface AXMAudioDataSource : NSObject {

	BOOL _circular;
	vector<int, std::__1::allocator<int> >* _sampleBuffer;
	unsigned long long _length;
	unsigned long long _currentSampleIndex;
	double _level;
	NSArray* _effectsChain;
	NSString* _name;
	double _sampleRate;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double sampleRate;                                //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) vector<int* sampleBuffer;                         //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long length;                          //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long currentSampleIndex;              //@synthesize currentSampleIndex=_currentSampleIndex - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                    //@synthesize circular=_circular - In the implementation block
@property (assign,nonatomic) double level;                                       //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) NSArray * effectsChain;                           //@synthesize effectsChain=_effectsChain - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)description;
-(NSString *)name;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(double)level;
-(void)setLevel:(double)arg1 ;
-(double)sampleRate;
-(vector<int*)sampleBuffer;
-(id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3 ;
-(unsigned long long)currentSampleIndex;
-(BOOL)isCircular;
-(void)setCurrentSampleIndex:(unsigned long long)arg1 ;
-(void)processEffects:(unsigned long long)arg1 ;
-(void)normalizeAudio;
-(NSArray *)effectsChain;
-(void)addEffectToChain:(id)arg1 ;
-(void)removeEffectFromChain:(id)arg1 ;
-(void)setCircular:(BOOL)arg1 ;
@end

