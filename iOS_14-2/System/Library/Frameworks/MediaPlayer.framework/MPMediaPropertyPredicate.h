/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	NSString* _property;
	id _value;
	long long _comparisonType;

}

@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) id value; 
@property (assign,nonatomic) long long comparisonType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3 ;
+(id)predicateWithValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionOfValue:(id)arg1 forProperty:(id)arg2 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)_ML3PredicateForML3EntityProperty:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setComparisonType:(long long)arg1 ;
-(id)ML3PredicateForContainer;
-(long long)comparisonType;
-(id)ML3PredicateForTrack;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

