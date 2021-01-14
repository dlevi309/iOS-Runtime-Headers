/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@protocol OS_os_log;
@class NSMutableArray, NSObject, NSString;

@interface NMLogActionsCoalescer : NSObject {

	NSMutableArray* _pendingLogActions;
	id _identifier;
	NSObject*<OS_os_log> _category;
	unsigned long long _partNumber;
	NSString* _prefix;
	unsigned long long _messageBufferLimit;

}

@property (nonatomic,retain) NSString * prefix;                                  //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) unsigned long long messageBufferLimit;              //@synthesize messageBufferLimit=_messageBufferLimit - In the implementation block
-(void)flush;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(void)_writeLogMessageFromActions:(id)arg1 includingPartNumber:(BOOL)arg2 ;
-(void)_addAction:(id)arg1 toPendingActions:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)_logMessageFromPendingLogActions:(id)arg1 includingPartNumber:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 logCategory:(id)arg2 ;
-(void)setMessageBufferLimit:(unsigned long long)arg1 ;
-(void)addLogAction:(id)arg1 ;
-(unsigned long long)messageBufferLimit;
@end

