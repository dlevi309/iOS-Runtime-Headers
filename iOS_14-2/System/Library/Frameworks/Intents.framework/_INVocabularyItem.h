/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requiresUserIdentification;
	NSString* _string;
	NSString* _vocabularyIdentifier;
	NSUUID* __siriID;

}

@property (setter=_setSiriID:,nonatomic,copy) NSUUID * _siriID;              //@synthesize _siriID=__siriID - In the implementation block
@property (nonatomic,readonly) NSString * string;                            //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * vocabularyIdentifier;              //@synthesize vocabularyIdentifier=_vocabularyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresUserIdentification;              //@synthesize requiresUserIdentification=_requiresUserIdentification - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)validate;
-(BOOL)_isSimilarEnoughToNotSync:(id)arg1 ;
-(id)_initWithUncheckedSpeakable:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSpeakable:(id)arg1 ;
-(NSUUID *)_siriID;
-(BOOL)requiresUserIdentification;
-(id)description;
-(id)_initWithVocabularyItem:(id)arg1 ;
-(id)_initWithUncheckedString:(id)arg1 vocabularyIdentifier:(id)arg2 requiresUserIdentification:(BOOL)arg3 ;
-(NSString *)vocabularyIdentifier;
-(id)_dictionaryForSaving;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2 requiresUserIdentification:(BOOL)arg3 ;
-(id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setSiriID:(id)arg1 ;
@end

