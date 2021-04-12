/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsSharedEvent.h>

@class NSMapTable;

@interface MTLDebugSharedEvent : MTLToolsSharedEvent {

	mutex _resourceMapLock;
	unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long> > >* _valueToCountMap;
	NSMapTable* _valueToResourcesMap;
	BOOL _isStandardEvent;

}

@property (assign,nonatomic) BOOL isStandardEvent;              //@synthesize isStandardEvent=_isStandardEvent - In the implementation block
+(id)sharedListener;
-(void)dealloc;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)releaseWritableResourcesForValue:(unsigned long long)arg1 ;
-(BOOL)isStandardEvent;
-(void)setWritableResources:(id)arg1 forValue:(unsigned long long)arg2 ;
-(void)retainWritableResourcesForValue:(unsigned long long)arg1 ;
-(void)setIsStandardEvent:(BOOL)arg1 ;
-(void)_retainWritableResourcesForValue:(unsigned long long)arg1 ;
-(id)removeWritableResourcesForValue:(unsigned long long)arg1 ;
@end

