/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


#import <BookCoverUtility/BookCoverUtility-Structs.h>
@class NSString;

@interface _BCUCoverEffectsShadow : NSObject {

	CGImageRef _image;
	NSString* _blendMode;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UIEdgeInsets insets;               //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) CGImageRef image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * blendMode;              //@synthesize blendMode=_blendMode - In the implementation block
-(NSString *)blendMode;
-(CGSize)size;
-(CGImageRef)image;
-(CGRect)contentsCenter;
-(UIEdgeInsets)insets;
-(id)initWithImage:(CGImageRef)arg1 insets:(UIEdgeInsets)arg2 blendMode:(id)arg3 ;
-(id)initWithImage:(CGImageRef)arg1 insets:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)roundedInsetsWithSize:(CGSize)arg1 ;
@end

