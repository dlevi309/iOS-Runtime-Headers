/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {

	IMMultiDict* _reusablePluginViewsByClassName;
	NSMutableDictionary* _pluginViewToReuseDelegateMap;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)resetState;
-(void)enqueuePluginViewForReuse:(id)arg1 ;
-(BOOL)_objectSupportsPluginViewReuse:(id)arg1 ;
-(void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2 ;
-(id)_pointerKeyForPluginView:(id)arg1 ;
-(id)dequeuePluginViewForBalloonController:(id)arg1 ;
@end

