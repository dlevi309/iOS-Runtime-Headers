/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)predicates;
-(id)initWithPredicates:(id)arg1 ;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg1 ;
@end

