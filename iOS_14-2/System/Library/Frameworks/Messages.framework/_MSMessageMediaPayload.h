/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSURL, NSString, NSData, NSDictionary;

@interface _MSMessageMediaPayload : NSObject <NSSecureCoding> {

	BOOL _isSticker;
	UIImage* _image;
	NSURL* _mediaURL;
	NSString* _mediaType;
	NSString* _text;
	NSData* _mediaData;
	NSString* _mediaFilename;
	NSData* _data;
	NSString* _accessibilityLabel;
	NSDictionary* _attributionInfo;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * mediaURL;                            //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,copy) NSData * mediaData;                          //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,copy) NSString * mediaType;                        //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * mediaFilename;                    //@synthesize mediaFilename=_mediaFilename - In the implementation block
@property (nonatomic,copy) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;               //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (assign,nonatomic) BOOL isSticker;                            //@synthesize isSticker=_isSticker - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)mediaType;
-(id)init;
-(NSURL *)mediaURL;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isSticker;
-(UIImage *)image;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(NSString *)text;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMediaData:(NSData *)arg1 ;
-(NSData *)mediaData;
-(void)setIsSticker:(BOOL)arg1 ;
-(id)initWithSticker:(id)arg1 ;
-(NSString *)mediaFilename;
-(void)setMediaFilename:(NSString *)arg1 ;
@end

