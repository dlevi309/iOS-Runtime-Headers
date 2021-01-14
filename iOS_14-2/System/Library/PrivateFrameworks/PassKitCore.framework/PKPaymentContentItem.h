/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(CGImageRef)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(CGImageRef)image;
-(NSURLRequest *)imageRequest;
-(void)setCentered:(BOOL)arg1 ;
-(void)setImageRequest:(NSURLRequest *)arg1 ;
-(BOOL)isEqualToPaymentContentItem:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSAttributedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)label;
-(NSAttributedString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isCentered;
@end

