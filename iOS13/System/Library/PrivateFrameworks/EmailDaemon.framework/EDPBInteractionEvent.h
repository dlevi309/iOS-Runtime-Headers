/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPETMessageFrameTypeIntrospectable.h>
#import <libobjc.A.dylib/EDPBDataSetters.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDPBInteractionEventAppBackground, EDPBInteractionEventAppLaunch, EDPBInteractionEventAppResume, EDPBInteractionEventFlagChanged, EDPBInteractionEventForwardDraftStarted, EDPBInteractionEventForwardSent, EDPBInteractionEventLinkClicked, EDPBInteractionEventMarkedMuteThread, EDPBInteractionEventMessageCopied, EDPBInteractionEventMessageFetched, EDPBInteractionEventMessageMoved, EDPBInteractionEventMessageSent, EDPBInteractionEventMessageViewEnd, EDPBInteractionEventMessageViewStart, EDPBInteractionEventReadChanged, EDPBInteractionEventReplyDraftStarted, EDPBInteractionEventReplySent;

@interface EDPBInteractionEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, NSCopying> {

	unsigned long long _timestamp;
	EDPBInteractionEventAppBackground* _appBackground;
	EDPBInteractionEventAppLaunch* _appLaunch;
	EDPBInteractionEventAppResume* _appResume;
	int _eventName;
	EDPBInteractionEventFlagChanged* _flagChanged;
	EDPBInteractionEventForwardDraftStarted* _forwardDraftStarted;
	EDPBInteractionEventForwardSent* _forwardSent;
	EDPBInteractionEventLinkClicked* _linkClicked;
	EDPBInteractionEventMarkedMuteThread* _markedMuteThread;
	EDPBInteractionEventMessageCopied* _messageCopied;
	EDPBInteractionEventMessageFetched* _messageFetched;
	EDPBInteractionEventMessageMoved* _messageMoved;
	EDPBInteractionEventMessageSent* _messageSent;
	EDPBInteractionEventMessageViewEnd* _messageViewEnd;
	EDPBInteractionEventMessageViewStart* _messageViewStart;
	EDPBInteractionEventReadChanged* _readChanged;
	EDPBInteractionEventReplyDraftStarted* _replyDraftStarted;
	EDPBInteractionEventReplySent* _replySent;
	unsigned _sequenceNumber;
	SCD_Struct_ED5 _has;

}

@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                                    //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventName; 
@property (assign,nonatomic) int eventName;                                                              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageFetched; 
@property (nonatomic,retain) EDPBInteractionEventMessageFetched * messageFetched;                        //@synthesize messageFetched=_messageFetched - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageSent; 
@property (nonatomic,retain) EDPBInteractionEventMessageSent * messageSent;                              //@synthesize messageSent=_messageSent - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageMoved; 
@property (nonatomic,retain) EDPBInteractionEventMessageMoved * messageMoved;                            //@synthesize messageMoved=_messageMoved - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageCopied; 
@property (nonatomic,retain) EDPBInteractionEventMessageCopied * messageCopied;                          //@synthesize messageCopied=_messageCopied - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkClicked; 
@property (nonatomic,retain) EDPBInteractionEventLinkClicked * linkClicked;                              //@synthesize linkClicked=_linkClicked - In the implementation block
@property (nonatomic,readonly) BOOL hasAppLaunch; 
@property (nonatomic,retain) EDPBInteractionEventAppLaunch * appLaunch;                                  //@synthesize appLaunch=_appLaunch - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBackground; 
@property (nonatomic,retain) EDPBInteractionEventAppBackground * appBackground;                          //@synthesize appBackground=_appBackground - In the implementation block
@property (nonatomic,readonly) BOOL hasAppResume; 
@property (nonatomic,retain) EDPBInteractionEventAppResume * appResume;                                  //@synthesize appResume=_appResume - In the implementation block
@property (nonatomic,readonly) BOOL hasFlagChanged; 
@property (nonatomic,retain) EDPBInteractionEventFlagChanged * flagChanged;                              //@synthesize flagChanged=_flagChanged - In the implementation block
@property (nonatomic,readonly) BOOL hasReadChanged; 
@property (nonatomic,retain) EDPBInteractionEventReadChanged * readChanged;                              //@synthesize readChanged=_readChanged - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageViewStart; 
@property (nonatomic,retain) EDPBInteractionEventMessageViewStart * messageViewStart;                    //@synthesize messageViewStart=_messageViewStart - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageViewEnd; 
@property (nonatomic,retain) EDPBInteractionEventMessageViewEnd * messageViewEnd;                        //@synthesize messageViewEnd=_messageViewEnd - In the implementation block
@property (nonatomic,readonly) BOOL hasReplyDraftStarted; 
@property (nonatomic,retain) EDPBInteractionEventReplyDraftStarted * replyDraftStarted;                  //@synthesize replyDraftStarted=_replyDraftStarted - In the implementation block
@property (nonatomic,readonly) BOOL hasForwardDraftStarted; 
@property (nonatomic,retain) EDPBInteractionEventForwardDraftStarted * forwardDraftStarted;              //@synthesize forwardDraftStarted=_forwardDraftStarted - In the implementation block
@property (nonatomic,readonly) BOOL hasReplySent; 
@property (nonatomic,retain) EDPBInteractionEventReplySent * replySent;                                  //@synthesize replySent=_replySent - In the implementation block
@property (nonatomic,readonly) BOOL hasForwardSent; 
@property (nonatomic,retain) EDPBInteractionEventForwardSent * forwardSent;                              //@synthesize forwardSent=_forwardSent - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedMuteThread; 
@property (nonatomic,retain) EDPBInteractionEventMarkedMuteThread * markedMuteThread;                    //@synthesize markedMuteThread=_markedMuteThread - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(int)eventName;
-(void)setEventName:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(BOOL)hasEventName;
-(EDPBInteractionEventReadChanged *)readChanged;
-(void)setReadChanged:(EDPBInteractionEventReadChanged *)arg1 ;
-(EDPBInteractionEventMessageSent *)messageSent;
-(void)setAppLaunch:(EDPBInteractionEventAppLaunch *)arg1 ;
-(EDPBInteractionEventAppLaunch *)appLaunch;
-(int)messageFrameType;
-(EDPBInteractionEventMessageMoved *)messageMoved;
-(EDPBInteractionEventMessageCopied *)messageCopied;
-(EDPBInteractionEventLinkClicked *)linkClicked;
-(EDPBInteractionEventAppBackground *)appBackground;
-(EDPBInteractionEventAppResume *)appResume;
-(EDPBInteractionEventFlagChanged *)flagChanged;
-(EDPBInteractionEventMessageViewStart *)messageViewStart;
-(EDPBInteractionEventMessageViewEnd *)messageViewEnd;
-(EDPBInteractionEventReplyDraftStarted *)replyDraftStarted;
-(EDPBInteractionEventForwardDraftStarted *)forwardDraftStarted;
-(EDPBInteractionEventReplySent *)replySent;
-(EDPBInteractionEventForwardSent *)forwardSent;
-(EDPBInteractionEventMarkedMuteThread *)markedMuteThread;
-(id)ed_oneOfConcreteEvent;
-(void)setMessageFetched:(EDPBInteractionEventMessageFetched *)arg1 ;
-(void)setMessageSent:(EDPBInteractionEventMessageSent *)arg1 ;
-(void)setMessageMoved:(EDPBInteractionEventMessageMoved *)arg1 ;
-(void)setMessageCopied:(EDPBInteractionEventMessageCopied *)arg1 ;
-(void)setLinkClicked:(EDPBInteractionEventLinkClicked *)arg1 ;
-(void)setAppBackground:(EDPBInteractionEventAppBackground *)arg1 ;
-(void)setAppResume:(EDPBInteractionEventAppResume *)arg1 ;
-(void)setFlagChanged:(EDPBInteractionEventFlagChanged *)arg1 ;
-(void)setMessageViewStart:(EDPBInteractionEventMessageViewStart *)arg1 ;
-(void)setMessageViewEnd:(EDPBInteractionEventMessageViewEnd *)arg1 ;
-(void)setReplyDraftStarted:(EDPBInteractionEventReplyDraftStarted *)arg1 ;
-(void)setForwardDraftStarted:(EDPBInteractionEventForwardDraftStarted *)arg1 ;
-(void)setReplySent:(EDPBInteractionEventReplySent *)arg1 ;
-(void)setForwardSent:(EDPBInteractionEventForwardSent *)arg1 ;
-(void)setMarkedMuteThread:(EDPBInteractionEventMarkedMuteThread *)arg1 ;
-(void)setHasEventName:(BOOL)arg1 ;
-(id)eventNameAsString:(int)arg1 ;
-(int)StringAsEventName:(id)arg1 ;
-(BOOL)hasMessageFetched;
-(BOOL)hasMessageSent;
-(BOOL)hasMessageMoved;
-(BOOL)hasMessageCopied;
-(BOOL)hasLinkClicked;
-(BOOL)hasAppLaunch;
-(BOOL)hasAppBackground;
-(BOOL)hasAppResume;
-(BOOL)hasFlagChanged;
-(BOOL)hasReadChanged;
-(BOOL)hasMessageViewStart;
-(BOOL)hasMessageViewEnd;
-(BOOL)hasReplyDraftStarted;
-(BOOL)hasForwardDraftStarted;
-(BOOL)hasReplySent;
-(BOOL)hasForwardSent;
-(BOOL)hasMarkedMuteThread;
-(EDPBInteractionEventMessageFetched *)messageFetched;
@end

