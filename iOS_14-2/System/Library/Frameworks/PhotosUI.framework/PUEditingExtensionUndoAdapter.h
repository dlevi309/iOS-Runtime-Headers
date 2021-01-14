/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUEditingExtensionUndoTarget.h>

@protocol PUEditingExtensionUndoButtonHost;
@class NSUndoManager, NSString;

@interface PUEditingExtensionUndoAdapter : NSObject <PUEditingExtensionUndoTarget> {

	id<PUEditingExtensionUndoButtonHost> _buttonHost;
	NSUndoManager* _undoManager;

}

@property (nonatomic,readonly) id<PUEditingExtensionUndoButtonHost> buttonHost;              //@synthesize buttonHost=_buttonHost - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                                    //@synthesize undoManager=_undoManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUndoManager *)undoManager;
-(id)initWithButtonHost:(id)arg1 ;
-(id<PUEditingExtensionUndoButtonHost>)buttonHost;
-(void)performUndo;
-(void)performRedo;
-(void)_registerForUndoManagerNotifications:(id)arg1 ;
-(void)_unregisterForUndoManagerNotifications:(id)arg1 ;
-(void)_updateButtonState;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
@end

