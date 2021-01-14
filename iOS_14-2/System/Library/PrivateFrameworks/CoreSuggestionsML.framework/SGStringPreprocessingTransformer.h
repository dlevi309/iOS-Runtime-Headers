/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSArray, NSMethodSignature, NSString;

@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol> {

	NSArray* _methodNames;
	NSArray* _methodValues;
	NSMethodSignature* _methodSignatureNoValue;
	NSMethodSignature* _methodSignatureWithValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withMethods:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithMethods:(id)arg1 ;
-(id)transformBatch:(id)arg1 ;
-(SEL)selectorForMethod:(id)arg1 preprocessor:(id)arg2 ;
-(void)applySelector:(SEL)arg1 preprocesor:(id)arg2 string:(id)arg3 value:(id)arg4 ;
-(BOOL)isEqualToStringPreprocessingTransformer:(id)arg1 ;
@end

