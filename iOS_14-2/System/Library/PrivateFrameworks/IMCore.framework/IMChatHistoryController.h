/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject {

	NSMutableDictionary* _runningQueries;

}

@property (retain) NSMutableDictionary * _runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedInstance;
-(void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3 ;
-(id)init;
-(void)messageItemQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3 ;
-(void)loadMessageItemWithGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)set_runningQueries:(NSMutableDictionary *)arg1 ;
-(void)loadMessageWithGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_runningQueries;
-(void)dealloc;
@end

