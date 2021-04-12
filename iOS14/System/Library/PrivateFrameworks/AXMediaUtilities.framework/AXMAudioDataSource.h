/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLength:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)length;
-(void)setCircular:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(double)level;
-(id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3 ;
-(unsigned long long)currentSampleIndex;
-(void)setCurrentSampleIndex:(unsigned long long)arg1 ;
-(void)processEffects:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(vector<int*)sampleBuffer;
-(void)normalizeAudio;
-(void)setLevel:(double)arg1 ;
-(NSArray *)effectsChain;
-(void)addEffectToChain:(id)arg1 ;
-(void)removeEffectFromChain:(id)arg1 ;
-(BOOL)isCircular;
-(double)sampleRate;
-(void)dealloc;
@end

