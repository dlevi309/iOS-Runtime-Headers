/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) long long eventCode; 
@property (nonatomic,readonly) NSMutableDictionary * eventPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)eventCode;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(NSString *)eventName;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)eventPayload;
@end

