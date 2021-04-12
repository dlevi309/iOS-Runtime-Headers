/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class SGStringPreprocessingTransformer, SGStringLabelingTransformer, NSString;

@interface SGTextLabelTransformer : NSObject <PMLTransformerProtocol> {

	SGStringPreprocessingTransformer* _preprocessor;
	SGStringLabelingTransformer* _labeler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_preprocessedLabelsWithLabels:(id)arg1 andPreprocessor:(id)arg2 ;
+(id)withMethods:(id)arg1 withLabelStrings:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithMethods:(id)arg1 withLabelStrings:(id)arg2 ;
-(id)initWithPreprocessor:(id)arg1 labeler:(id)arg2 ;
-(BOOL)isEqualToTextLabelTransformer:(id)arg1 ;
@end

