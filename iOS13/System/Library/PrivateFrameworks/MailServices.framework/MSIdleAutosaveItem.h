/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subject;
-(NSString *)autosaveIdentifier;
-(id)initWithAutosaveIdentifier:(id)arg1 subject:(id)arg2 ;
@end

