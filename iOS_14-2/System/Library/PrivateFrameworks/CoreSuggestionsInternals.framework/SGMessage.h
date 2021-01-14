/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGSpotlightIdentifiers.h>

@class SGCachedResult, NSString, NSDate, NSArray, CSPerson;

@interface SGMessage : NSObject <NSSecureCoding, NSCopying, SGSpotlightIdentifiers> {

	SGCachedResult* _isInhumanSenderCached;
	SGCachedResult* _isInhumanContentCached;
	SGCachedResult* _taggedCharacterRangesCached;
	SGCachedResult* _messageSubjectDetectedDataCached;
	SGCachedResult* _dataDetectorMatchesWithSignatureForContentCached;
	BOOL _isSent;
	BOOL _isStoredEncrypted;
	NSString* _subject;
	NSString* _textContent;
	NSString* _source;
	NSDate* _date;
	NSString* _bundleIdentifier;
	NSString* _uniqueIdentifier;
	NSString* _domainIdentifier;
	NSArray* _attachments;
	NSArray* _accountHandles;
	NSString* _accountType;

}

@property (nonatomic,copy) NSString * subject;                                    //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * textContent;                                //@synthesize textContent=_textContent - In the implementation block
@property (nonatomic,copy) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * domainIdentifier;                           //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * accountHandles;                              //@synthesize accountHandles=_accountHandles - In the implementation block
@property (assign,nonatomic) BOOL isSent;                                         //@synthesize isSent=_isSent - In the implementation block
@property (nonatomic,copy) NSString * accountType;                                //@synthesize accountType=_accountType - In the implementation block
@property (assign,nonatomic) BOOL isStoredEncrypted;                              //@synthesize isStoredEncrypted=_isStoredEncrypted - In the implementation block
@property (nonatomic,readonly) CSPerson * author; 
@property (nonatomic,readonly) NSArray * attachments;                             //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,readonly) BOOL isInhumanSender; 
@property (nonatomic,readonly) BOOL isInhumanContent; 
@property (nonatomic,readonly) NSArray * messageSubjectDetectedData; 
@property (nonatomic,readonly) NSArray * plainTextDetectedData; 
@property (nonatomic,readonly) NSArray * taggedCharacterRanges; 
@property (nonatomic,readonly) NSRange detectedDataSignatureRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)messageWithSearchableItem:(id)arg1 ;
+(id)fromDictionary:(id)arg1 ;
-(NSString *)accountType;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)subject;
-(id)asDictionary;
-(CSPerson *)author;
-(NSString *)domainIdentifier;
-(NSArray *)attachments;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)uniqueIdentifier;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSArray *)taggedCharacterRanges;
-(BOOL)isSent;
-(id)initWithSearchableItem:(id)arg1 ;
-(NSString *)textContent;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setAccountHandles:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)accountHandles;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setTextContent:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setAccountType:(NSString *)arg1 ;
-(BOOL)isEqualToMessage:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source;
-(id)spotlightBundleIdentifier;
-(id)spotlightDomainIdentifier;
-(id)initForBuilding;
-(BOOL)isInhumanContentNoncached;
-(id)dataDetectorMatchesWithSignature;
-(id)spotlightUniqueIdentifier;
-(id)spotlightReference;
-(NSArray *)plainTextDetectedData;
-(BOOL)isInhumanSender;
-(BOOL)isInhumanContent;
-(NSArray *)messageSubjectDetectedData;
-(NSRange)detectedDataSignatureRange;
-(BOOL)isStoredEncrypted;
-(void)setIsStoredEncrypted:(BOOL)arg1 ;
@end

