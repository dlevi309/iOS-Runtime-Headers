/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDictionary, NSSet, CNPromise;

@interface CNContactMatchInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _matchedNameProperty;
	NSNumber* _relevanceScore;
	NSDictionary* _matchedProperties;
	NSSet* _matchedTerms;
	CNPromise* _excerpt;

}

@property (assign,nonatomic) BOOL matchedNameProperty;                    //@synthesize matchedNameProperty=_matchedNameProperty - In the implementation block
@property (nonatomic,copy) NSNumber * relevanceScore;                     //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (nonatomic,copy) NSDictionary * matchedProperties;              //@synthesize matchedProperties=_matchedProperties - In the implementation block
@property (nonatomic,retain) NSSet * matchedTerms;                        //@synthesize matchedTerms=_matchedTerms - In the implementation block
@property (nonatomic,retain) CNPromise * excerpt;                         //@synthesize excerpt=_excerpt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)matchedTerms;
-(void)setMatchedTerms:(NSSet *)arg1 ;
-(NSDictionary *)matchedProperties;
-(CNPromise *)excerpt;
-(void)setRelevanceScore:(NSNumber *)arg1 ;
-(void)setMatchedNameProperty:(BOOL)arg1 ;
-(void)setMatchedProperties:(NSDictionary *)arg1 ;
-(void)setExcerpt:(CNPromise *)arg1 ;
-(NSNumber *)relevanceScore;
-(BOOL)matchedNameProperty;
@end

