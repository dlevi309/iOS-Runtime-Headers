/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)fileSize;
-(NSString *)url;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)pixelRatio;
-(void)setPixelRatio:(NSNumber *)arg1 ;
@end

