/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_PV22 _time;

}

@property (assign,nonatomic) opaqueCMSampleBufferRef sampleBuffer;              //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_PV22 time;                              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL mirrored;                                     //@synthesize mirrored=_mirrored - In the implementation block
@property (nonatomic,retain) NSMutableArray * effects;                          //@synthesize effects=_effects - In the implementation block
@property (nonatomic,copy) NSDictionary * effectProperties;                     //@synthesize effectProperties=_effectProperties - In the implementation block
@property (nonatomic,copy) NSArray * metadataObjects;                           //@synthesize metadataObjects=_metadataObjects - In the implementation block
-(SCD_Struct_PV22)time;
-(void)setTime:(SCD_Struct_PV22)arg1 ;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)mirrored;
-(NSArray *)metadataObjects;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(NSMutableArray *)effects;
-(oneway void)dealloc;
-(void)setEffects:(NSMutableArray *)arg1 ;
-(NSDictionary *)effectProperties;
-(void)setEffectProperties:(NSDictionary *)arg1 ;
-(void)setMetadataObjects:(NSArray *)arg1 ;
@end

