/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class NSString, NSSet;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	NSString* _searchString;
	NSSet* _properties;

}

@property (nonatomic,copy) NSString * searchString;                 //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSSet * properties;                      //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2 ;
-(NSSet *)properties;
-(void)encodeWithCoder:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(NSString *)description;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)ML3PredicateForContainer;
-(void)setProperties:(NSSet *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(id)ML3PredicateForTrack;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
@end

