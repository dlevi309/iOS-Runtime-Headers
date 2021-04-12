/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithMethods:(id)arg1 withLabelStrings:(id)arg2 ;
-(id)initWithPreprocessor:(id)arg1 labeler:(id)arg2 ;
-(BOOL)isEqualToTextLabelTransformer:(id)arg1 ;
@end

