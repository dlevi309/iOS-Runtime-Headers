/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUVideoProperties.h>

@class NSURL, NSArray, NSDictionary, NSString;

@interface _NUVideoProperties : NSObject <NUVideoProperties> {

	NSURL* _url;
	NSArray* _metadata;
	long long _orientation;
	NSDictionary* _colorProperties;
	SCD_Struct_NU7 _size;
	SCD_Struct_NU7 _originalSize;
	SCD_Struct_NU6 _livePhotoKeyFrameTime;
	SCD_Struct_NU6 _duration;
	SCD_Struct_NU8 _cleanAperture;
	SCD_Struct_NU8 _originalCleanAperture;

}

@property (nonatomic,retain) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSArray * metadata;                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 size;                               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 originalSize;                       //@synthesize originalSize=_originalSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU8 cleanAperture;                      //@synthesize cleanAperture=_cleanAperture - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU8 originalCleanAperture;              //@synthesize originalCleanAperture=_originalCleanAperture - In the implementation block
@property (assign,nonatomic) long long orientation;                             //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSDictionary * colorProperties;                    //@synthesize colorProperties=_colorProperties - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 livePhotoKeyFrameTime;              //@synthesize livePhotoKeyFrameTime=_livePhotoKeyFrameTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 duration;                           //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProperties:(id)arg1 ;
-(void)setDuration:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU7)size;
-(void)setOriginalSize:(SCD_Struct_NU7)arg1 ;
-(void)setSize:(SCD_Struct_NU7)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSURL *)url;
-(NSString *)description;
-(SCD_Struct_NU6)livePhotoKeyFrameTime;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)orientation;
-(SCD_Struct_NU7)originalSize;
-(NSArray *)metadata;
-(SCD_Struct_NU6)duration;
-(void)setOrientation:(long long)arg1 ;
-(SCD_Struct_NU8)cleanAperture;
-(SCD_Struct_NU8)originalCleanAperture;
-(NSDictionary *)colorProperties;
-(void)setCleanAperture:(SCD_Struct_NU8)arg1 ;
-(void)setOriginalCleanAperture:(SCD_Struct_NU8)arg1 ;
-(void)setColorProperties:(NSDictionary *)arg1 ;
-(void)setLivePhotoKeyFrameTime:(SCD_Struct_NU6)arg1 ;
@end

