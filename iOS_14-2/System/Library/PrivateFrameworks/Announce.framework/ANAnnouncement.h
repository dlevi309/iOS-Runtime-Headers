/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANMessage.h>
#import <libobjc.A.dylib/ANDataMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ANLocation, NSDate, ANSender, ANParticipant, NSArray, NSDictionary, NSURL, NSData;

@interface ANAnnouncement : NSObject <ANMessage, ANDataMessage, NSSecureCoding> {

	int _deviceClass;
	NSString* _identifier;
	NSString* _groupID;
	ANLocation* _location;
	unsigned long long _action;
	NSDate* _playbackDeadline;
	NSString* _filePath;
	ANSender* _sender;
	int _productType;
	unsigned long long _statusFlags;
	NSString* _transcriptionText;
	ANParticipant* _announcer;
	NSArray* _listeners;
	NSString* _messageVersion;
	NSArray* _dataItems;
	NSDate* _receiptTimestamp;
	NSDate* _creationTimestamp;
	unsigned long long _source;

}

@property (nonatomic,readonly) NSDictionary * remoteSessionDictionary; 
@property (nonatomic,readonly) NSDictionary * sendFailureDictionary; 
@property (nonatomic,readonly) NSURL * defaultActionURL; 
@property (nonatomic,retain) ANParticipant * announcer;                             //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,retain) NSArray * listeners;                                   //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSString * messageVersion;                             //@synthesize messageVersion=_messageVersion - In the implementation block
@property (assign,nonatomic) unsigned long long action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSArray * dataItems;                                   //@synthesize dataItems=_dataItems - In the implementation block
@property (nonatomic,retain) ANSender * sender;                                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) ANLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int productType;                                       //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) int deviceClass;                                       //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) BOOL isRelayType; 
@property (nonatomic,readonly) BOOL isRelayed; 
@property (nonatomic,readonly) BOOL isRelayRequest; 
@property (nonatomic,retain) NSString * transcriptionText;                          //@synthesize transcriptionText=_transcriptionText - In the implementation block
@property (nonatomic,readonly) NSDate * receiptTimestamp;                           //@synthesize receiptTimestamp=_receiptTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;                        //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) NSDate * creationTimestamp;                            //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                                  //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSDate * playbackDeadline;                             //@synthesize playbackDeadline=_playbackDeadline - In the implementation block
@property (nonatomic,retain) NSString * filePath;                                   //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) NSData * fileData; 
@property (nonatomic,readonly) BOOL hasPlayed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)uniqueAnnouncersInAnnouncements:(id)arg1 inHome:(id)arg2 ;
+(unsigned long long)sourceFromString:(id)arg1 ;
+(id)messageWithoutDataFromMessage:(id)arg1 ;
+(id)messageFromData:(id)arg1 data:(id)arg2 ;
+(id)messageDataFromMessage:(id)arg1 ;
+(unsigned long long)defaultAudioEffects;
-(NSString *)filePath;
-(ANSender *)sender;
-(id)message;
-(NSURL *)defaultActionURL;
-(NSArray *)listeners;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(void)setSender:(ANSender *)arg1 ;
-(id)init;
-(void)setCreationTimestamp:(NSDate *)arg1 ;
-(ANLocation *)location;
-(int)productType;
-(NSString *)groupID;
-(void)setListeners:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)deviceClass;
-(NSDate *)creationTimestamp;
-(void)setProductType:(int)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(unsigned long long)statusFlags;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setLocation:(ANLocation *)arg1 ;
-(NSString *)description;
-(id)initWithMessage:(id)arg1 ;
-(id)copy;
-(void)setDeviceClass:(int)arg1 ;
-(id)_stringForAction:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)fileData;
-(NSString *)identifier;
-(void)setFilePath:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)source;
-(NSString *)transcriptionText;
-(void)setTranscriptionText:(NSString *)arg1 ;
-(void)setMessageVersion:(NSString *)arg1 ;
-(NSString *)messageVersion;
-(BOOL)isRelayed;
-(ANParticipant *)announcer;
-(id)announcerNameInHome:(id)arg1 ;
-(BOOL)hasPlayed;
-(NSDictionary *)remoteSessionDictionary;
-(NSDictionary *)sendFailureDictionary;
-(BOOL)isRelayRequest;
-(NSArray *)dataItems;
-(void)setAnnouncer:(ANParticipant *)arg1 ;
-(NSDate *)playbackDeadline;
-(void)setPlaybackDeadline:(NSDate *)arg1 ;
-(void)setDataItems:(NSArray *)arg1 ;
-(id)_generateGroupID;
-(id)_uuidFromUUIDs:(id)arg1 ;
-(BOOL)isRelayType;
-(BOOL)updateWithContentsOfAnnouncement:(id)arg1 ;
-(void)removeAudioFileDataItems;
-(id)_stringForDataType:(unsigned long long)arg1 ;
-(void)processAudioTranscription:(/*^block*/id)arg1 ;
-(NSDate *)receiptTimestamp;
-(BOOL)processAudioWithEffects:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isAnnouncerInSameRoomAsAccessory:(id)arg1 ;
@end

