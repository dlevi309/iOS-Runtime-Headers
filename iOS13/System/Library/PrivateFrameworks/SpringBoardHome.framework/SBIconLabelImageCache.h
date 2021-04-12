/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, CPMemoryPool, NSString;

@interface SBIconLabelImageCache : NSObject <BSDescriptionProviding> {

	NSMutableDictionary* _labelImages;
	double _scale;
	CPMemoryPool* _grayPool;
	CPMemoryPool* _colorPool;
	CPMemoryPool* _legibilityPool;
	CGSize _maxLabelSize;

}

@property (nonatomic,readonly) CPMemoryPool * grayPool;                              //@synthesize grayPool=_grayPool - In the implementation block
@property (nonatomic,readonly) CPMemoryPool * colorPool;                             //@synthesize colorPool=_colorPool - In the implementation block
@property (nonatomic,readonly) CPMemoryPool * legibilityPool;                        //@synthesize legibilityPool=_legibilityPool - In the implementation block
@property (nonatomic,readonly) CGSize maxLabelSize;                                  //@synthesize maxLabelSize=_maxLabelSize - In the implementation block
@property (nonatomic,readonly) double scale;                                         //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCachedImages; 
@property (nonatomic,readonly) unsigned long long numberOfCacheHits; 
@property (nonatomic,readonly) unsigned long long numberOfCacheMisses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(double)scale;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGSize)maxLabelSize;
-(id)initWithMaxLabelSize:(CGSize)arg1 scale:(double)arg2 ;
-(unsigned long long)numberOfCachedImages;
-(unsigned long long)numberOfCacheHits;
-(unsigned long long)numberOfCacheMisses;
-(void)removeLabelImagesWithParametersPassingTest:(/*^block*/id)arg1 ;
-(id)labelImageForParameters:(id)arg1 ;
-(id)generateAndStoreLabelImageForParameters:(id)arg1 ;
-(id)cachedLabelImageForParameters:(id)arg1 ;
-(void)cacheLabelImageForParameters:(id)arg1 ;
-(void)removeLabelImageForParameters:(id)arg1 ;
-(id)cachedLabelImagesWithParametersPassingTest:(/*^block*/id)arg1 ;
-(CPMemoryPool *)grayPool;
-(CPMemoryPool *)colorPool;
-(CPMemoryPool *)legibilityPool;
@end

