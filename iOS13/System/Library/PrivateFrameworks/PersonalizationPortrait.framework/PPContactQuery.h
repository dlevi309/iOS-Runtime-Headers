/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface PPContactQuery : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _domain;
	BOOL _onlyQueryMostRelevantContacts;
	NSArray* _matchingIdentifiers;
	NSString* _matchingName;
	NSString* _matchingEmail;
	NSString* _matchingPhone;
	NSString* _matchingPostalAddress;
	NSString* _targetBundleIdentifier;
	NSString* _context;

}

@property (nonatomic,retain) NSArray * matchingIdentifiers;                  //@synthesize matchingIdentifiers=_matchingIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * matchingName;                        //@synthesize matchingName=_matchingName - In the implementation block
@property (nonatomic,retain) NSString * matchingEmail;                       //@synthesize matchingEmail=_matchingEmail - In the implementation block
@property (nonatomic,retain) NSString * matchingPhone;                       //@synthesize matchingPhone=_matchingPhone - In the implementation block
@property (nonatomic,retain) NSString * matchingPostalAddress;               //@synthesize matchingPostalAddress=_matchingPostalAddress - In the implementation block
@property (assign,nonatomic) unsigned char domain;                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * targetBundleIdentifier;              //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * context;                             //@synthesize context=_context - In the implementation block
@property (assign) BOOL onlyQueryMostRelevantContacts;                       //@synthesize onlyQueryMostRelevantContacts=_onlyQueryMostRelevantContacts - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(void)setDomain:(unsigned char)arg1 ;
-(NSString *)targetBundleIdentifier;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasNoConstraints;
-(BOOL)isEqualToContactQuery:(id)arg1 ;
-(NSArray *)matchingIdentifiers;
-(void)setMatchingIdentifiers:(NSArray *)arg1 ;
-(NSString *)matchingName;
-(void)setMatchingName:(NSString *)arg1 ;
-(NSString *)matchingEmail;
-(void)setMatchingEmail:(NSString *)arg1 ;
-(NSString *)matchingPhone;
-(void)setMatchingPhone:(NSString *)arg1 ;
-(NSString *)matchingPostalAddress;
-(void)setMatchingPostalAddress:(NSString *)arg1 ;
-(BOOL)onlyQueryMostRelevantContacts;
-(void)setOnlyQueryMostRelevantContacts:(BOOL)arg1 ;
@end

