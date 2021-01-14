/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTInferredMapItemDeduper : NSObject {

	/*^block*/id _deduperFunction;

}

@property (nonatomic,copy,readonly) id deduperFunction;              //@synthesize deduperFunction=_deduperFunction - In the implementation block
-(id)init;
-(id)initWithDeduperFunction:(/*^block*/id)arg1 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(BOOL)inferredMapItem:(id)arg1 dedupesToInferredMapItem:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)ingestInferredMapItem:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)ingestInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)deduperFunction;
@end

