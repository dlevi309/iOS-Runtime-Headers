/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPAssistantLogEvent.h>

@class NSString, NSMutableDictionary;

@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent> {

	unsigned _sessionID;
	NSString* _siriSessionIdentifier;

}

@property (assign,nonatomic) unsigned sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * siriSessionIdentifier;                    //@synthesize siriSessionIdentifier=_siriSessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) long long eventCode; 
@property (nonatomic,readonly) NSMutableDictionary * eventPayload; 
-(NSString *)eventName;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(long long)eventCode;
-(NSMutableDictionary *)eventPayload;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
@end

