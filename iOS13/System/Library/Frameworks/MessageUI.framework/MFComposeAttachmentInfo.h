/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)className;
-(BOOL)isDisplayableImage;
-(BOOL)isBasicImage;
-(id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(BOOL)arg3 isDisplayableImage:(BOOL)arg4 className:(id)arg5 ;
@end

