/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGContact, NSArray, SGMatchedDetails, SGObject;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _matchingFieldRecordId;
	long long _matchingFieldType;
	SGContact* _contact;
	NSArray* _matchTokens;
	SGMatchedDetails* _matchedDetails;

}

@property (nonatomic,readonly) SGContact * contact;                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) SGObject * matchingField; 
@property (nonatomic,readonly) long long matchingFieldType;                    //@synthesize matchingFieldType=_matchingFieldType - In the implementation block
@property (nonatomic,readonly) NSArray * matchTokens;                          //@synthesize matchTokens=_matchTokens - In the implementation block
@property (nonatomic,readonly) SGMatchedDetails * matchedDetails;              //@synthesize matchedDetails=_matchedDetails - In the implementation block
+(BOOL)supportsSecureCoding;
-(SGContact *)contact;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToContactMatch:(id)arg1 ;
-(id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 ;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 ;
-(SGObject *)matchingField;
-(NSArray *)matchTokens;
-(id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3 ;
-(long long)matchingFieldType;
-(SGMatchedDetails *)matchedDetails;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

