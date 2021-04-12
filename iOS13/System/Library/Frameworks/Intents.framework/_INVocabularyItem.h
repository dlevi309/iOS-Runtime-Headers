/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _string;
	NSString* _vocabularyIdentifier;
	NSUUID* __siriID;

}

@property (setter=_setSiriID:,nonatomic,copy) NSUUID * _siriID;              //@synthesize _siriID=__siriID - In the implementation block
@property (nonatomic,readonly) NSString * string;                            //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * vocabularyIdentifier;              //@synthesize vocabularyIdentifier=_vocabularyIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)string;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)validate;
-(NSString *)vocabularyIdentifier;
-(id)_initWithVocabularyItem:(id)arg1 ;
-(id)_initWithUncheckedString:(id)arg1 vocabularyIdentifier:(id)arg2 ;
-(id)_initWithUncheckedSpeakable:(id)arg1 ;
-(id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2 ;
-(id)initWithSpeakable:(id)arg1 ;
-(BOOL)_isSimilarEnoughToNotSync:(id)arg1 ;
-(id)_dictionaryForSaving;
-(NSUUID *)_siriID;
-(void)_setSiriID:(id)arg1 ;
@end

