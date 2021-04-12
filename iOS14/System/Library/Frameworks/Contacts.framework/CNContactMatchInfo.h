/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExcerpt:(CNPromise *)arg1 ;
-(CNPromise *)excerpt;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)relevanceScore;
-(void)setMatchedTerms:(NSSet *)arg1 ;
-(BOOL)matchedNameProperty;
-(void)setMatchedProperties:(NSDictionary *)arg1 ;
-(void)setRelevanceScore:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)matchedTerms;
-(void)setMatchedNameProperty:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)matchedProperties;
@end

