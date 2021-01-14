/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIImage;

@interface UISearchToken : NSObject {

	id _representedObject;
	NSString* _text;
	UIImage* _image;

}

@property (nonatomic,copy) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) id representedObject;              //@synthesize representedObject=_representedObject - In the implementation block
+(id)tokenWithImage:(id)arg1 ;
+(id)tokenWithIcon:(id)arg1 text:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setRepresentedObject:(id)arg1 ;
-(id)_initToken;
-(NSString *)text;
-(id)representedObject;
@end

