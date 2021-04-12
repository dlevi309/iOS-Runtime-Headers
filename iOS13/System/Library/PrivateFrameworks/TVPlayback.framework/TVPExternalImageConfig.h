/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSURL, NSString;

@interface TVPExternalImageConfig : NSObject {

	BOOL _usesOneBasedImageIndexes;
	double _imageInterval;
	long long _imageCount;
	NSURL* _baseURL;
	NSString* _imageNameFormatString;
	NSString* _version;

}

@property (assign,nonatomic) double imageInterval;                        //@synthesize imageInterval=_imageInterval - In the implementation block
@property (assign,nonatomic) long long imageCount;                        //@synthesize imageCount=_imageCount - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                               //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) BOOL usesOneBasedImageIndexes;               //@synthesize usesOneBasedImageIndexes=_usesOneBasedImageIndexes - In the implementation block
@property (nonatomic,copy) NSString * imageNameFormatString;              //@synthesize imageNameFormatString=_imageNameFormatString - In the implementation block
@property (nonatomic,copy) NSString * version;                            //@synthesize version=_version - In the implementation block
-(NSURL *)baseURL;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(long long)imageCount;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setImageCount:(long long)arg1 ;
-(double)imageInterval;
-(void)setImageInterval:(double)arg1 ;
-(BOOL)usesOneBasedImageIndexes;
-(void)setUsesOneBasedImageIndexes:(BOOL)arg1 ;
-(NSString *)imageNameFormatString;
-(void)setImageNameFormatString:(NSString *)arg1 ;
@end

