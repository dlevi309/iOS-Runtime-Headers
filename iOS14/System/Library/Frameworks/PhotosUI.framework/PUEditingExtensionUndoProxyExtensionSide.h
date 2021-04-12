/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUEditingExtensionUndoButtonHost.h>

@protocol PUEditingExtensionUndoTarget;
@class NSXPCConnection, NSString;

@interface PUEditingExtensionUndoProxyExtensionSide : NSObject <PUEditingExtensionUndoButtonHost> {

	id<PUEditingExtensionUndoTarget> _target;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<PUEditingExtensionUndoTarget> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id<PUEditingExtensionUndoTarget>)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)performUndo;
-(void)performRedo;
-(void)setUndoEnabled:(BOOL)arg1 redoEnabled:(BOOL)arg2 ;
-(void)setShowUndoRedo:(BOOL)arg1 ;
-(id)remoteObject;
-(id<PUEditingExtensionUndoTarget>)target;
@end

