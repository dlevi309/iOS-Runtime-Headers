/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary;

@interface VUIUpNextRequestManager : NSObject {

	NSMutableDictionary* _ongoingCanonicalIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingCanonicalIDOperationDictionary;              //@synthesize ongoingCanonicalIDOperationDictionary=_ongoingCanonicalIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2 ;
-(NSMutableDictionary *)ongoingCanonicalIDOperationDictionary;
-(void)setOngoingCanonicalIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

