/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MailSupport/MSAttachmentInfo.h>

@class NSString;

@interface MFComposeAttachmentInfo : MSAttachmentInfo {

	BOOL _isBasicImage;
	BOOL _isDisplayableImage;
	NSString* _className;

}

@property (nonatomic,readonly) BOOL isBasicImage;                      //@synthesize isBasicImage=_isBasicImage - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayableImage;                //@synthesize isDisplayableImage=_isDisplayableImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * className;              //@synthesize className=_className - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isBasicImage;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)className;
-(id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(BOOL)arg3 isDisplayableImage:(BOOL)arg4 className:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDisplayableImage;
@end

