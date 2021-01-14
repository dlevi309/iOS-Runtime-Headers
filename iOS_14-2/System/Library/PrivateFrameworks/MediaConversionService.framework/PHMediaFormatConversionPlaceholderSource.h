/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

#import <MediaConversionService/MediaConversionService-Structs.h>
#import <MediaConversionService/PHMediaFormatConversionSource.h>

@class NSString;

@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource {

	NSString* _fileType;

}

@property (nonatomic,copy) NSString * fileType;              //@synthesize fileType=_fileType - In the implementation block
+(id)imageSourceForFileType:(id)arg1 ;
+(id)videoSourceForFileType:(id)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(unsigned long long)length;
-(id)fileURL;
-(CGSize)imageDimensions;
-(NSString *)fileType;
-(id)initWithFileType:(id)arg1 mediaType:(long long)arg2 ;
@end

