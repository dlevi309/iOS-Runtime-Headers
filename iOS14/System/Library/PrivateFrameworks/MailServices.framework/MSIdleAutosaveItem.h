/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MSIdleAutosaveItem : NSObject <NSSecureCoding> {

	NSString* _autosaveIdentifier;
	NSString* _subject;

}

@property (nonatomic,copy,readonly) NSString * autosaveIdentifier;              //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withAutosaveIdentifier:(id)arg1 subject:(id)arg2 ;
-(NSString *)subject;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)autosaveIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAutosaveIdentifier:(id)arg1 subject:(id)arg2 ;
@end

