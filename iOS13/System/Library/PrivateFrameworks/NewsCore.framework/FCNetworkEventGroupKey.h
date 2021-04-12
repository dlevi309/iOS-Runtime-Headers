/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {

	long long _eventType;
	unsigned long long _sessionID;
	NSString* _respondingPOP;

}

@property (assign,nonatomic) long long eventType;                       //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * respondingPOP;                  //@synthesize respondingPOP=_respondingPOP - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)eventType;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setEventType:(long long)arg1 ;
-(void)setRespondingPOP:(NSString *)arg1 ;
-(NSString *)respondingPOP;
@end

