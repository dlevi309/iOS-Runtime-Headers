/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying> {

	NSData* _imageData;
	NSString* _imageCacheKey;
	unsigned long long _startTimeInMilliseconds;
	NSString* _title;
	NSURL* _url;
	NSString* _urlTitle;

}

@property (nonatomic,copy) NSData * imageData;                                        //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imageCacheKey;                                  //@synthesize imageCacheKey=_imageCacheKey - In the implementation block
@property (assign,nonatomic) unsigned long long startTimeInMilliseconds;              //@synthesize startTimeInMilliseconds=_startTimeInMilliseconds - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLTitle;                                       //@synthesize urlTitle=_urlTitle - In the implementation block
-(long long)compare:(id)arg1 ;
-(NSString *)imageCacheKey;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSData *)imageData;
-(NSURL *)URL;
-(NSString *)URLTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSString *)title;
-(unsigned long long)startTimeInMilliseconds;
-(void)normalizeProperties;
-(BOOL)isEqualIgnoringTimesAndTitle:(id)arg1 ;
-(void)setStartTimeInMilliseconds:(unsigned long long)arg1 ;
-(void)setURLTitle:(NSString *)arg1 ;
-(void)setImageCacheKey:(NSString *)arg1 ;
@end

