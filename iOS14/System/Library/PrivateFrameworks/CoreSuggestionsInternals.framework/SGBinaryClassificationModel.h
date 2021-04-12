/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGModel.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSString;

@interface SGBinaryClassificationModel : SGModel <PMLPlistAndChunksSerializableProtocol> {

	double _threshold;

}

@property (readonly) double threshold;                                                                              //@synthesize threshold=_threshold - In the implementation block
@property (readonly) id<PMLMultiLabelClassifierProtocol><PMLPlistAndChunksSerializableProtocol> model; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modelForPath:(id)arg1 modelClass:(Class)arg2 ;
+(id)modelFromMobileAssetForEntity:(id)arg1 type:(id)arg2 language:(id)arg3 class:(Class)arg4 ;
+(id)modelFromMobileAssetForName:(id)arg1 language:(id)arg2 ;
-(id)serialize;
-(double)threshold;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)predictLabelForInput:(id)arg1 ;
@end

