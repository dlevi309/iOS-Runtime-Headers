/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLRequest, NSAttributedString;

@interface PKPaymentContentItem : NSObject <NSSecureCoding> {

	BOOL _centered;
	NSURLRequest* _imageRequest;
	CGImageRef _image;
	NSAttributedString* _title;
	NSAttributedString* _label;

}

@property (nonatomic,copy) NSURLRequest * imageRequest;                    //@synthesize imageRequest=_imageRequest - In the implementation block
@property (assign,nonatomic) CGImageRef image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSAttributedString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * label;                     //@synthesize label=_label - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;              //@synthesize centered=_centered - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSAttributedString *)title;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(void)setLabel:(NSAttributedString *)arg1 ;
-(NSAttributedString *)label;
-(BOOL)isCentered;
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentContentItem:(id)arg1 ;
-(NSURLRequest *)imageRequest;
-(void)setImageRequest:(NSURLRequest *)arg1 ;
@end

