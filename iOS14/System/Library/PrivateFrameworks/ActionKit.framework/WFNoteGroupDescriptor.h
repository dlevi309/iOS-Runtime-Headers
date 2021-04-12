/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString, WFContentAttribution;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding> {

	INSpeakableString* _speakableString;
	NSString* _accountIdentifier;
	unsigned long long _managedLevel;

}

@property (nonatomic,copy,readonly) NSString * accountIdentifier;                            //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long managedLevel;                              //@synthesize managedLevel=_managedLevel - In the implementation block
@property (nonatomic,readonly) INSpeakableString * speakableString;                          //@synthesize speakableString=_speakableString - In the implementation block
@property (nonatomic,readonly) WFContentAttribution * targetContentAttribution; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)managedLevelForNotesAccounts;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INSpeakableString *)speakableString;
-(WFContentAttribution *)targetContentAttribution;
-(unsigned long long)managedLevel;
-(id)initWithNoteGroupSpeakableString:(id)arg1 accountIdentifier:(id)arg2 managedLavel:(unsigned long long)arg3 ;
-(id)initWithNoteGroupSpeakableString:(id)arg1 ;
-(id)descriptorWithTargetAccountIdentifier:(id)arg1 targetManagedLevel:(unsigned long long)arg2 ;
@end

