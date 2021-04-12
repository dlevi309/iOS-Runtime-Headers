/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/


@class NSString;

@interface IPAPhotoAdjustmentPipeline : NSObject {

	NSString* _platform;
	unsigned long long _version;

}

@property (nonatomic,readonly) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(void)initialize;
+(id)current;
+(id)pipelineForPlatform:(id)arg1 version:(unsigned long long)arg2 ;
+(id)pipelineForVersion:(unsigned long long)arg1 ;
+(id)pipelineFromString:(id)arg1 ;
-(NSString *)platform;
-(id)debugDescription;
-(id)description;
-(unsigned long long)hash;
-(id)string;
-(unsigned long long)version;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPlatform:(id)arg1 version:(unsigned long long)arg2 ;
-(BOOL)isEqualToAdjustmentPipeline:(id)arg1 ;
@end

