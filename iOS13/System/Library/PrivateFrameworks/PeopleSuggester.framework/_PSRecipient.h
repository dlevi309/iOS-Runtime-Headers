/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface _PSRecipient : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _handle;
	NSString* _displayName;
	CNContact* _contact;
	NSString* _senderHandle;

}

@property (nonatomic,copy,readonly) NSString * senderHandle;              //@synthesize senderHandle=_senderHandle - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                    //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) CNContact * contact;                         //@synthesize contact=_contact - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recipientForINPerson:(id)arg1 contactResolver:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)handle;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4 ;
-(NSString *)senderHandle;
@end

