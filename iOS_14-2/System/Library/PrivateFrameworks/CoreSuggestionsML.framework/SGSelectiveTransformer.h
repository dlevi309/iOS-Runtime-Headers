/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@protocol PMLTransformerProtocol;
@class NSString;

@interface SGSelectiveTransformer : NSObject <PMLTransformerProtocol> {

	id<PMLTransformerProtocol> _transformer;
	NSString* _inputKey;

}

@property (retain) id<PMLTransformerProtocol> transformer;              //@synthesize transformer=_transformer - In the implementation block
@property (retain) NSString * inputKey;                                 //@synthesize inputKey=_inputKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTransformer:(id)arg1 appliedToInputKey:(id)arg2 ;
-(void)setTransformer:(id<PMLTransformerProtocol>)arg1 ;
-(id<PMLTransformerProtocol>)transformer;
-(NSString *)inputKey;
-(unsigned long long)hash;
-(void)setInputKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithTransformer:(id)arg1 appliedToInputKey:(id)arg2 ;
-(BOOL)isEqualToSGSelectiveTransformer:(id)arg1 ;
@end

