/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface MLCEmbeddingDescriptor : NSObject <NSCopying> {

	BOOL _scalesGradientByFrequency;
	NSNumber* _embeddingCount;
	NSNumber* _embeddingDimension;
	NSNumber* _paddingIndex;
	NSNumber* _maximumNorm;
	NSNumber* _pNorm;

}

@property (nonatomic,readonly) NSNumber * embeddingCount;                   //@synthesize embeddingCount=_embeddingCount - In the implementation block
@property (nonatomic,readonly) NSNumber * embeddingDimension;               //@synthesize embeddingDimension=_embeddingDimension - In the implementation block
@property (nonatomic,readonly) NSNumber * paddingIndex;                     //@synthesize paddingIndex=_paddingIndex - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumNorm;                      //@synthesize maximumNorm=_maximumNorm - In the implementation block
@property (nonatomic,readonly) NSNumber * pNorm;                            //@synthesize pNorm=_pNorm - In the implementation block
@property (nonatomic,readonly) BOOL scalesGradientByFrequency;              //@synthesize scalesGradientByFrequency=_scalesGradientByFrequency - In the implementation block
+(id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(BOOL)arg6 ;
+(id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 ;
-(NSNumber *)pNorm;
-(id)description;
-(unsigned long long)hash;
-(NSNumber *)embeddingDimension;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)paddingIndex;
-(NSNumber *)maximumNorm;
-(BOOL)scalesGradientByFrequency;
-(NSNumber *)embeddingCount;
-(id)initWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(BOOL)arg6 ;
@end

