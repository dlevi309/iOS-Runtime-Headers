/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface _MFMailComposeContentVariation : NSObject <NSSecureCoding> {

	NSMutableArray* _attachmentIdentifiers;
	BOOL _bodyIsHTML;
	NSString* _name;
	NSString* _body;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL bodyIsHTML;                            //@synthesize bodyIsHTML=_bodyIsHTML - In the implementation block
@property (nonatomic,copy) NSArray * attachmentIdentifiers;              //@synthesize attachmentIdentifiers=_attachmentIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)addAttachmentIdentifier:(id)arg1 ;
-(BOOL)bodyIsHTML;
-(void)setBodyIsHTML:(BOOL)arg1 ;
-(NSArray *)attachmentIdentifiers;
-(void)setAttachmentIdentifiers:(NSArray *)arg1 ;
@end

