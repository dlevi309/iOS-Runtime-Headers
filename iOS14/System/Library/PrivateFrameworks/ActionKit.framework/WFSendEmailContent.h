/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface WFSendEmailContent : NSObject <NSSecureCoding> {

	BOOL _isHTML;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _subject;
	NSString* _body;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSArray * toRecipients;               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,copy) NSArray * ccRecipients;               //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,copy) NSArray * bccRecipients;              //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,copy) NSString * subject;                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * body;                      //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL isHTML;                        //@synthesize isHTML=_isHTML - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                //@synthesize attachments=_attachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)body;
-(NSArray *)attachments;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(BOOL)isHTML;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(void)setIsHTML:(BOOL)arg1 ;
@end

