/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, VCVoiceShortcutClient;

@interface AXSiriShortcutsManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _shortcuts;
	NSMutableDictionary* _updateBlocks;
	int _contentProtectionNotifyToken;
	/*^block*/id _siriShortcutsDidChangeBlock;
	VCVoiceShortcutClient* _shortcutClient;

}

@property (nonatomic,retain) VCVoiceShortcutClient * shortcutClient;              //@synthesize shortcutClient=_shortcutClient - In the implementation block
@property (nonatomic,readonly) NSArray * shortcuts; 
@property (nonatomic,copy) id siriShortcutsDidChangeBlock;                        //@synthesize siriShortcutsDidChangeBlock=_siriShortcutsDidChangeBlock - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(NSArray *)shortcuts;
-(id)registerShortcutsDidChangeBlock:(/*^block*/id)arg1 ;
-(void)unregisterShortcutsDidChangeBlock:(id)arg1 ;
-(id)shortcutForIdentifier:(id)arg1 ;
-(void)performShortcut:(id)arg1 ;
-(void)setShortcutClient:(VCVoiceShortcutClient *)arg1 ;
-(void)handleVoiceShortcutClientDataUpdateNotification:(id)arg1 ;
-(void)_loadShortcuts;
-(VCVoiceShortcutClient *)shortcutClient;
-(id)siriShortcutsDidChangeBlock;
-(void)setSiriShortcutsDidChangeBlock:(id)arg1 ;
@end

