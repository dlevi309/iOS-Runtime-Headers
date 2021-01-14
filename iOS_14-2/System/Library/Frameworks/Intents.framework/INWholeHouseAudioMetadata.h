/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber, NSString;

@interface INWholeHouseAudioMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSArray* _speakerNames;
	NSArray* _speakerRooms;
	NSArray* _permanentNames;
	NSArray* _intentSpeakerNames;
	NSArray* _intentSpeakerRooms;
	NSArray* _intentDestinationSpeakers;
	NSArray* _intentPermanentNames;
	NSArray* _spokenEntityTypes;
	NSArray* _spokenEntityNames;
	NSNumber* _numberOfHomeAutomationWords;
	NSNumber* _isAllSpeakers;
	NSNumber* _isPauseOrStop;
	NSNumber* _isWholeHouseAudioCommand;
	NSNumber* _isInHere;
	NSNumber* _hasExcept;
	NSNumber* _isParticipatingSpeaker;

}

@property (nonatomic,copy,readonly) NSArray * speakerNames;                              //@synthesize speakerNames=_speakerNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * speakerRooms;                              //@synthesize speakerRooms=_speakerRooms - In the implementation block
@property (nonatomic,copy,readonly) NSArray * permanentNames;                            //@synthesize permanentNames=_permanentNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentSpeakerNames;                        //@synthesize intentSpeakerNames=_intentSpeakerNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentSpeakerRooms;                        //@synthesize intentSpeakerRooms=_intentSpeakerRooms - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentDestinationSpeakers;                 //@synthesize intentDestinationSpeakers=_intentDestinationSpeakers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentPermanentNames;                      //@synthesize intentPermanentNames=_intentPermanentNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * spokenEntityTypes;                         //@synthesize spokenEntityTypes=_spokenEntityTypes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * spokenEntityNames;                         //@synthesize spokenEntityNames=_spokenEntityNames - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfHomeAutomationWords;              //@synthesize numberOfHomeAutomationWords=_numberOfHomeAutomationWords - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isAllSpeakers;                            //@synthesize isAllSpeakers=_isAllSpeakers - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isPauseOrStop;                            //@synthesize isPauseOrStop=_isPauseOrStop - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isWholeHouseAudioCommand;                 //@synthesize isWholeHouseAudioCommand=_isWholeHouseAudioCommand - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isInHere;                                 //@synthesize isInHere=_isInHere - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasExcept;                                //@synthesize hasExcept=_hasExcept - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isParticipatingSpeaker;                   //@synthesize isParticipatingSpeaker=_isParticipatingSpeaker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithSpeakerNames:(id)arg1 speakerRooms:(id)arg2 permanentNames:(id)arg3 intentSpeakerNames:(id)arg4 intentSpeakerRooms:(id)arg5 intentDestinationSpeakers:(id)arg6 intentPermanentNames:(id)arg7 spokenEntityTypes:(id)arg8 spokenEntityNames:(id)arg9 numberOfHomeAutomationWords:(id)arg10 isAllSpeakers:(id)arg11 isPauseOrStop:(id)arg12 isWholeHouseAudioCommand:(id)arg13 isInHere:(id)arg14 hasExcept:(id)arg15 isParticipatingSpeaker:(id)arg16 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSNumber *)hasExcept;
-(NSArray *)speakerNames;
-(NSArray *)speakerRooms;
-(NSArray *)permanentNames;
-(NSArray *)intentSpeakerNames;
-(NSArray *)intentSpeakerRooms;
-(NSArray *)intentDestinationSpeakers;
-(NSNumber *)isAllSpeakers;
-(NSArray *)intentPermanentNames;
-(NSArray *)spokenEntityTypes;
-(NSArray *)spokenEntityNames;
-(NSNumber *)numberOfHomeAutomationWords;
-(NSNumber *)isPauseOrStop;
-(NSNumber *)isWholeHouseAudioCommand;
-(NSNumber *)isParticipatingSpeaker;
-(NSString *)description;
-(NSNumber *)isInHere;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
