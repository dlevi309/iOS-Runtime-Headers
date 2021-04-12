/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString, WFDataInfo;

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding> {

	INSpeakableString* _speakableString;
	NSString* _accountIdentifier;
	unsigned long long _managedLevel;

}

@property (nonatomic,copy,readonly) NSString * accountIdentifier;                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long managedLevel;                  //@synthesize managedLevel=_managedLevel - In the implementation block
@property (nonatomic,readonly) INSpeakableString * speakableString;              //@synthesize speakableString=_speakableString - In the implementation block
@property (nonatomic,readonly) WFDataInfo * targetDataInfo; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)managedLevelForNotesAccounts;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accountIdentifier;
-(INSpeakableString *)speakableString;
-(WFDataInfo *)targetDataInfo;
-(unsigned long long)managedLevel;
-(id)initWithNoteGroupSpeakableString:(id)arg1 accountIdentifier:(id)arg2 managedLavel:(unsigned long long)arg3 ;
-(id)initWithNoteGroupSpeakableString:(id)arg1 ;
-(id)descriptorWithTargetAccountIdentifier:(id)arg1 targetManagedLevel:(unsigned long long)arg2 ;
@end

