/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate {

	NSString* _property;
	NSSet* _values;

}

@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) NSSet * values;                   //@synthesize values=_values - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
-(NSString *)property;
-(NSSet *)values;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(BOOL)isEqual:(id)arg1 ;
@end

