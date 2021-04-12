/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSString;

@interface SGTokenDistanceMappingTransformer : NSObject <PMLTransformerProtocol> {

	NSString* _targetString;
	unsigned long long _maxDistance;

}

@property (nonatomic,retain) NSString * targetString;                     //@synthesize targetString=_targetString - In the implementation block
@property (assign,nonatomic) unsigned long long maxDistance;              //@synthesize maxDistance=_maxDistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformArray:(id)arg1 withTargetIndex:(unsigned long long)arg2 maximumDistance:(unsigned long long)arg3 ;
+(id)withTarget:(id)arg1 maxDistance:(unsigned long long)arg2 ;
+(void)debugSetContext:(id)arg1 ;
+(void)debugStoreContext;
+(BOOL)debugAppendText:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMaxDistance:(unsigned long long)arg1 ;
-(unsigned long long)maxDistance;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)targetString;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithTarget:(id)arg1 maxDistance:(unsigned long long)arg2 ;
-(BOOL)isEqualToTokenDistanceMappingTransformer:(id)arg1 ;
-(void)setTargetString:(NSString *)arg1 ;
@end

