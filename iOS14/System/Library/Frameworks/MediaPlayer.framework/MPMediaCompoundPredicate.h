/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class NSArray, NSString;

@interface MPMediaCompoundPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	NSArray* _predicates;

}

@property (nonatomic,copy,readonly) NSArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateMatchingPredicates:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(NSArray *)predicates;
-(NSString *)description;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPredicates:(id)arg1 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(BOOL)isEqual:(id)arg1 ;
@end

