/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary;

@interface VUIMarkAsWatchedRequestManager : NSObject {

	NSMutableDictionary* _ongoingItemIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingItemIDOperationDictionary;              //@synthesize ongoingItemIDOperationDictionary=_ongoingItemIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSMutableDictionary *)ongoingItemIDOperationDictionary;
-(void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3 ;
-(void)setOngoingItemIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

