/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPImage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LPImageAttachmentSubstitute : LPImage <NSSecureCoding> {

	long long _index;

}

@property (assign,nonatomic) long long index;              //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)index;
-(BOOL)_shouldEncodeData;
-(id)initWithImage:(id)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

