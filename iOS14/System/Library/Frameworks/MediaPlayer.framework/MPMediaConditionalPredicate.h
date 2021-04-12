/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class MPMediaPredicate, NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	MPMediaPredicate* _conditionPredicate;
	MPMediaPredicate* _thenPredicate;
	MPMediaPredicate* _elsePredicate;

}

@property (nonatomic,copy,readonly) MPMediaPredicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(MPMediaPredicate *)elsePredicate;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(MPMediaPredicate *)conditionPredicate;
-(MPMediaPredicate *)thenPredicate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg1 ;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
@end

