/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSDictionary, NSArray;

@interface PVCameraPreviewRequest : NSObject {

	BOOL _mirrored;
	opaqueCMSampleBufferRef _sampleBuffer;
	NSMutableArray* _effects;
	NSDictionary* _effectProperties;
	NSArray* _metadataObjects;
	SCD_Struct_PV20 _time;

}

@property (assign,nonatomic) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV20 time;                              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL mirrored;                                     //@synthesize mirrored=_mirrored - In the implementation block
@property (nonatomic,retain) NSMutableArray * effects;                          //@synthesize effects=_effects - In the implementation block
@property (nonatomic,copy) NSDictionary * effectProperties;                     //@synthesize effectProperties=_effectProperties - In the implementation block
@property (nonatomic,copy) NSArray * metadataObjects;                           //@synthesize metadataObjects=_metadataObjects - In the implementation block
-(oneway void)dealloc;
-(SCD_Struct_PV20)time;
-(void)setTime:(SCD_Struct_PV20)arg1 ;
-(NSArray *)metadataObjects;
-(BOOL)mirrored;
-(void)setMirrored:(BOOL)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSMutableArray *)effects;
-(void)setEffects:(NSMutableArray *)arg1 ;
-(NSDictionary *)effectProperties;
-(void)setEffectProperties:(NSDictionary *)arg1 ;
-(void)setMetadataObjects:(NSArray *)arg1 ;
@end

