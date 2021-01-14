/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {

	IMMultiDict* _reusablePluginViewsByClassName;
	NSMutableDictionary* _pluginViewToReuseDelegateMap;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)_objectSupportsPluginViewReuse:(id)arg1 ;
-(id)_pointerKeyForPluginView:(id)arg1 ;
-(void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2 ;
-(id)dequeuePluginViewForBalloonController:(id)arg1 ;
-(void)enqueuePluginViewForReuse:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)resetState;
-(void)dealloc;
@end

