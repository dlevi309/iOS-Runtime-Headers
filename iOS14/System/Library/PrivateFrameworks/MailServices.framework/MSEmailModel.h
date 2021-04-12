/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface MSEmailModel : NSObject <NSSecureCoding> {

	int _type;
	NSString* _subject;
	NSString* _sender;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSString* _body;
	NSURL* _reference;

}

@property (nonatomic,copy) NSString * subject;               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * sender;                //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSArray * to;                     //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                     //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                    //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,retain) NSString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSURL * reference;              //@synthesize reference=_reference - In the implementation block
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)to;
-(NSArray *)cc;
-(NSArray *)bcc;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)subject;
-(NSString *)sender;
-(NSString *)body;
-(void)setSender:(NSString *)arg1 ;
-(NSURL *)reference;
-(void)setTo:(NSArray *)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(void)setBcc:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setReference:(NSURL *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
@end

