/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned long long)version;
-(NSString *)platform;
-(id)initWithPlatform:(id)arg1 version:(unsigned long long)arg2 ;
-(BOOL)isEqualToAdjustmentPipeline:(id)arg1 ;
@end

