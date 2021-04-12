/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INPrivateMediaIntentData, NSArray, NSString;

@interface INPrivateSearchForMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INPrivateMediaIntentData* _privateMediaIntentData;
	NSArray* _audioSearchResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INPrivateMediaIntentData * privateMediaIntentData;              //@synthesize privateMediaIntentData=_privateMediaIntentData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSearchResults;                                   //@synthesize audioSearchResults=_audioSearchResults - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INPrivateMediaIntentData *)privateMediaIntentData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAudioSearchResults:(id)arg1 ;
-(id)initWithPrivateMediaIntentData:(id)arg1 audioSearchResults:(id)arg2 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(unsigned long long)hash;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSArray *)audioSearchResults;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

