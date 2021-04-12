/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

@protocol BWDeepFusionProcessorInputDelegate;
@class NSDictionary, NSArray;

@interface BWDeepFusionProcessorInput : BWStillImageProcessorInput {

	id<BWDeepFusionProcessorInputDelegate> _delegate;
	NSDictionary* _evZeroReferenceFrameAttachments;
	SCD_Struct_BW2 _evZeroReferenceFramePTS;
	CVBufferRef _syntheticReference;
	NSDictionary* _syntheticReferenceMetadata;
	CVBufferRef _syntheticReferenceFusionMap;
	NSDictionary* _syntheticReferenceFusionMapMetadata;
	CVBufferRef _syntheticLong;
	NSDictionary* _syntheticLongMetadata;
	CVBufferRef _syntheticLongFusionMap;
	NSDictionary* _syntheticLongFusionMapMetadata;
	CVBufferRef _syntheticRealLongFusionMap;
	NSDictionary* _syntheticRealLongFusionMapMetadata;
	void* _skinMask;
	void* _personMask;
	id _faceObservations;

}

@property (nonatomic,retain) id<BWDeepFusionProcessorInputDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * evZeroReferenceFrameAttachments; 
@property (assign,nonatomic) SCD_Struct_BW2 evZeroReferenceFramePTS; 
@property (nonatomic,readonly) CVBufferRef syntheticReference;                                  //@synthesize syntheticReference=_syntheticReference - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticReferenceMetadata;                       //@synthesize syntheticReferenceMetadata=_syntheticReferenceMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticReferenceFusionMap;                         //@synthesize syntheticReferenceFusionMap=_syntheticReferenceFusionMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticReferenceFusionMapMetadata;              //@synthesize syntheticReferenceFusionMapMetadata=_syntheticReferenceFusionMapMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticLong;                                       //@synthesize syntheticLong=_syntheticLong - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticLongMetadata;                            //@synthesize syntheticLongMetadata=_syntheticLongMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticLongFusionMap;                              //@synthesize syntheticLongFusionMap=_syntheticLongFusionMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticLongFusionMapMetadata;                   //@synthesize syntheticLongFusionMapMetadata=_syntheticLongFusionMapMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef syntheticRealLongFusionMap;                          //@synthesize syntheticRealLongFusionMap=_syntheticRealLongFusionMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * syntheticRealLongFusionMapMetadata;               //@synthesize syntheticRealLongFusionMapMetadata=_syntheticRealLongFusionMapMetadata - In the implementation block
@property (nonatomic,readonly) CVBufferRef skinMask; 
@property (nonatomic,readonly) CVBufferRef personMask; 
@property (nonatomic,readonly) NSArray * faceObservations; 
-(void)dealloc;
-(id<BWDeepFusionProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWDeepFusionProcessorInputDelegate>)arg1 ;
-(void)addSkinMask:(void*)arg1 personMask:(void*)arg2 faceObservations:(id)arg3 ;
-(void)setEvZeroReferenceFrameAttachments:(NSDictionary *)arg1 ;
-(void)setEvZeroReferenceFramePTS:(SCD_Struct_BW2)arg1 ;
-(void)addBuffer:(CVBufferRef)arg1 metadata:(id)arg2 type:(unsigned long long)arg3 ;
-(NSDictionary *)evZeroReferenceFrameAttachments;
-(SCD_Struct_BW2)evZeroReferenceFramePTS;
-(BOOL)receivedAllInferences;
-(CVBufferRef)skinMask;
-(CVBufferRef)personMask;
-(NSArray *)faceObservations;
-(CVBufferRef)syntheticReference;
-(NSDictionary *)syntheticReferenceMetadata;
-(CVBufferRef)syntheticReferenceFusionMap;
-(NSDictionary *)syntheticReferenceFusionMapMetadata;
-(CVBufferRef)syntheticLong;
-(NSDictionary *)syntheticLongMetadata;
-(CVBufferRef)syntheticLongFusionMap;
-(NSDictionary *)syntheticLongFusionMapMetadata;
-(CVBufferRef)syntheticRealLongFusionMap;
-(NSDictionary *)syntheticRealLongFusionMapMetadata;
@end

