/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary;

@interface VUIFavoritesRequestManager : NSObject {

	NSMutableDictionary* _ongoingEntityIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingEntityIDOperationDictionary;              //@synthesize ongoingEntityIDOperationDictionary=_ongoingEntityIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSMutableDictionary *)ongoingEntityIDOperationDictionary;
-(void)sendRequestForEntityID:(id)arg1 teamName:(id)arg2 action:(unsigned long long)arg3 ;
-(void)setOngoingEntityIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

