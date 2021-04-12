/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2 confirmationShouldWaitCompletion:(BOOL)arg3 ;
-(void)_displayConfirmationForAction:(unsigned long long)arg1 ;
-(NSMutableDictionary *)ongoingCanonicalIDOperationDictionary;
-(void)setOngoingCanonicalIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

