/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary;

@interface VUIRemoveFromPlayHistoryRequestManager : NSObject {

	NSMutableDictionary* _ongoingDeleteIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingDeleteIDOperationDictionary;              //@synthesize ongoingDeleteIDOperationDictionary=_ongoingDeleteIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSMutableDictionary *)ongoingDeleteIDOperationDictionary;
-(void)sendRequestForDeleteID:(id)arg1 canonicalID:(id)arg2 isContinueWatching:(BOOL)arg3 ;
-(void)setOngoingDeleteIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

