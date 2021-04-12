/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(UIImage *)image;
-(NSData *)imageData;
-(NSDictionary *)dictionaryValue;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithImageData:(id)arg1 identifier:(id)arg2 description:(id)arg3 ;
@end

