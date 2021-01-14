/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSNumber;

@interface INAnnouncement : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSURL* _speechDataURL;
	NSString* _identifier;
	NSString* _speechDataTranscription;

}

@property (nonatomic,copy,readonly) NSNumber * startTime; 
@property (nonatomic,copy,readonly) NSNumber * endTime; 
@property (nonatomic,copy,readonly) NSURL * speechDataURL;                           //@synthesize speechDataURL=_speechDataURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * speechDataTranscription;              //@synthesize speechDataTranscription=_speechDataTranscription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)speechDataTranscription;
-(id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2 speechDataTranscription:(id)arg3 ;
-(id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2 ;
-(NSString *)description;
-(id)initWithSpeechDataURL:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 identifier:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(NSString *)identifier;
-(NSNumber *)endTime;
-(NSURL *)speechDataURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)startTime;
-(BOOL)isEqual:(id)arg1 ;
@end

