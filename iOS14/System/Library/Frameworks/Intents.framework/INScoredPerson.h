/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INPerson, NSNumber;

@interface INScoredPerson : NSObject <NSCopying, NSSecureCoding> {

	INPerson* _person;
	NSNumber* _score;

}

@property (nonatomic,copy,readonly) INPerson * person;              //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * score;               //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(INPerson *)person;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSNumber *)score;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPerson:(id)arg1 score:(id)arg2 ;
@end

