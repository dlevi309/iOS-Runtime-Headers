/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

