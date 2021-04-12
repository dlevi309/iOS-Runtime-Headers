/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface ICEvernoteResource : NSObject <NSSecureCoding> {

	BOOL _isAttachment;
	NSString* _mime;
	NSString* _fileName;
	NSData* _data;
	NSString* _md5Hash;
	double _imageWidth;
	double _imageHeight;
	double _duration;

}

@property (assign,nonatomic) BOOL isAttachment;                //@synthesize isAttachment=_isAttachment - In the implementation block
@property (nonatomic,retain) NSString * mime;                  //@synthesize mime=_mime - In the implementation block
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * md5Hash;               //@synthesize md5Hash=_md5Hash - In the implementation block
@property (assign,nonatomic) double imageWidth;                //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) double imageHeight;               //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) double duration;                  //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(double)duration;
-(double)imageHeight;
-(double)imageWidth;
-(void)setDuration:(double)arg1 ;
-(BOOL)isAttachment;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setImageWidth:(double)arg1 ;
-(void)setImageHeight:(double)arg1 ;
-(NSString *)mime;
-(NSString *)md5Hash;
-(void)setIsAttachment:(BOOL)arg1 ;
-(void)setMime:(NSString *)arg1 ;
-(void)setMd5Hash:(NSString *)arg1 ;
@end

