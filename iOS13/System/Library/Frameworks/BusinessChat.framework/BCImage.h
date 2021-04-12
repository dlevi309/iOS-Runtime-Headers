/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


@class NSData, NSString, NSDictionary, UIImage;

@interface BCImage : NSObject {

	NSData* _imageData;
	NSString* _identifier;
	NSString* _imageDescription;

}

@property (nonatomic,retain) NSData * imageData;                            //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * imageDescription;                   //@synthesize imageDescription=_imageDescription - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) UIImage * image; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIImage *)image;
-(NSDictionary *)dictionaryValue;
-(NSData *)imageData;
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3 ;
@end

