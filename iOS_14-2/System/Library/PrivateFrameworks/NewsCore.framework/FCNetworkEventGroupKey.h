/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {

	int _eventType;
	unsigned long long _sessionID;
	NSString* _respondingPOP;

}

@property (assign,nonatomic) int eventType;                             //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * respondingPOP;                  //@synthesize respondingPOP=_respondingPOP - In the implementation block
-(void)setEventType:(int)arg1 ;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(int)eventType;
-(void)setRespondingPOP:(NSString *)arg1 ;
-(NSString *)respondingPOP;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

