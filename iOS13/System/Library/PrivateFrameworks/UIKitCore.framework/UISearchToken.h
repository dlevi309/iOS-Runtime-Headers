/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(id)_initToken;
@end

