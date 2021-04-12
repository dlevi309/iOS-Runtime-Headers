/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject {

	NSMutableDictionary* _runningQueries;

}

@property (retain) NSMutableDictionary * _runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)loadMessageWithGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3 ;
-(NSMutableDictionary *)_runningQueries;
-(void)set_runningQueries:(NSMutableDictionary *)arg1 ;
@end

