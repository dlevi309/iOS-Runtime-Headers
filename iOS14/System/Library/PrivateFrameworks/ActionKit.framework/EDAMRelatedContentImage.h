/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMRelatedContentImage : FATObject {

	NSString* _url;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _pixelRatio;
	NSNumber* _fileSize;

}

@property (nonatomic,retain) NSString * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSNumber * width;                   //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) NSNumber * height;                  //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSNumber * pixelRatio;              //@synthesize pixelRatio=_pixelRatio - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                //@synthesize fileSize=_fileSize - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setHeight:(NSNumber *)arg1 ;
-(NSNumber *)width;
-(NSNumber *)fileSize;
-(void)setWidth:(NSNumber *)arg1 ;
-(NSNumber *)height;
-(NSString *)url;
-(NSNumber *)pixelRatio;
-(void)setPixelRatio:(NSNumber *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
@end

