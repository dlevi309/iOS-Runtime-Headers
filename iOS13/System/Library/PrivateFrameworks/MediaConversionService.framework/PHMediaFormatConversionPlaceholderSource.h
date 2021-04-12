/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)length;
-(NSString *)fileType;
-(id)fileURL;
-(void)setFileType:(NSString *)arg1 ;
-(CGSize)imageDimensions;
-(id)initWithFileType:(id)arg1 mediaType:(long long)arg2 ;
@end

