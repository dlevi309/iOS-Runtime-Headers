/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSDate, NSString;

@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	long long _playbackState;
	NSDate* _nowPlayingTimestamp;
	NSString* _mediaType;
	NSString* _groupIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long playbackState;                        //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * nowPlayingTimestamp;              //@synthesize nowPlayingTimestamp=_nowPlayingTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)ad_shortDescription;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(NSString *)groupIdentifier;
-(NSString *)mediaType;
-(long long)playbackState;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)nowPlayingTimestamp;
-(NSString *)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)serializedBackingStore;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPlaybackState:(long long)arg1 nowPlayingTimestamp:(id)arg2 mediaType:(id)arg3 groupIdentifier:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

