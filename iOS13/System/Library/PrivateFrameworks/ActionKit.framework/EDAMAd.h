/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString, NSData;

@interface EDAMAd : FATObject {

	NSNumber* _id;
	NSNumber* _width;
	NSNumber* _height;
	NSString* _advertiserName;
	NSString* _imageUrl;
	NSString* _destinationUrl;
	NSNumber* _displaySeconds;
	NSNumber* _score;
	NSData* _image;
	NSString* _imageMime;
	NSString* _html;
	NSNumber* _displayFrequency;
	NSNumber* _openInTrunk;

}

@property (nonatomic,retain) NSNumber * id;                            //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSNumber * width;                         //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) NSNumber * height;                        //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSString * advertiserName;                //@synthesize advertiserName=_advertiserName - In the implementation block
@property (nonatomic,retain) NSString * imageUrl;                      //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,retain) NSString * destinationUrl;                //@synthesize destinationUrl=_destinationUrl - In the implementation block
@property (nonatomic,retain) NSNumber * displaySeconds;                //@synthesize displaySeconds=_displaySeconds - In the implementation block
@property (nonatomic,retain) NSNumber * score;                         //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSData * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * imageMime;                     //@synthesize imageMime=_imageMime - In the implementation block
@property (nonatomic,retain) NSString * html;                          //@synthesize html=_html - In the implementation block
@property (nonatomic,retain) NSNumber * displayFrequency;              //@synthesize displayFrequency=_displayFrequency - In the implementation block
@property (nonatomic,retain) NSNumber * openInTrunk;                   //@synthesize openInTrunk=_openInTrunk - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)score;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(void)setScore:(NSNumber *)arg1 ;
-(NSNumber *)displayFrequency;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(NSNumber *)id;
-(void)setId:(NSNumber *)arg1 ;
-(NSString *)advertiserName;
-(void)setAdvertiserName:(NSString *)arg1 ;
-(NSString *)imageUrl;
-(void)setImageUrl:(NSString *)arg1 ;
-(NSString *)destinationUrl;
-(void)setDestinationUrl:(NSString *)arg1 ;
-(NSNumber *)displaySeconds;
-(void)setDisplaySeconds:(NSNumber *)arg1 ;
-(NSString *)imageMime;
-(void)setImageMime:(NSString *)arg1 ;
-(void)setDisplayFrequency:(NSNumber *)arg1 ;
-(NSNumber *)openInTrunk;
-(void)setOpenInTrunk:(NSNumber *)arg1 ;
@end

