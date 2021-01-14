/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class NSString;

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	long long* _persistentIDs;
	BOOL _shouldContain;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;                    //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) const long long* persistentIDs;              //@synthesize persistentIDs=_persistentIDs - In the implementation block
@property (nonatomic,readonly) BOOL shouldContain;                          //@synthesize shouldContain=_shouldContain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(BOOL)arg3 ;
-(const long long*)persistentIDs;
-(BOOL)shouldContain;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(NSString *)description;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

