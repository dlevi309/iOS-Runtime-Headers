/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CSMSNExceptionManager : NSObject {

	NSMutableDictionary* _announceMessageExceptions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * announceMessageExceptions;              //@synthesize announceMessageExceptions=_announceMessageExceptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginAnnounceMessageException:(id)arg1 reason:(id)arg2 ;
-(void)endAnnounceMessageException:(id)arg1 reason:(id)arg2 ;
-(NSMutableDictionary *)announceMessageExceptions;
-(void)setAnnounceMessageExceptions:(NSMutableDictionary *)arg1 ;
@end

