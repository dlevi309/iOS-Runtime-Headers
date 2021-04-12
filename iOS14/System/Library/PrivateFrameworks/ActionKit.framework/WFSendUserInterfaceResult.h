/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface WFSendUserInterfaceResult : NSObject <NSSecureCoding> {

	NSArray* _recipients;
	NSString* _subject;
	NSString* _content;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSArray * recipients;               //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * subject;                 //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * content;                 //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSArray * attachments;              //@synthesize attachments=_attachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)recipients;
-(NSString *)subject;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)content;
-(NSArray *)attachments;
-(void)setContent:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
@end

