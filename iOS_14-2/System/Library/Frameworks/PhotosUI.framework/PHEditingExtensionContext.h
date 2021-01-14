/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/PUEditingExtensionVendor.h>

@class PUEditingInitialPayload, PUEditingExtensionUndoAdapter, NSUndoManager;

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor> {

	long long _fullSizeImageExtensionHandle;
	long long _videoPathExtensionHandle;
	BOOL _attemptUndoManagerAutoSetup;
	PUEditingInitialPayload* __initialPayload;
	PUEditingExtensionUndoAdapter* _undoAdapter;
	NSUndoManager* _undoManagerForBarButtons;

}

@property (readonly) PUEditingInitialPayload * _initialPayload;                        //@synthesize _initialPayload=__initialPayload - In the implementation block
@property (nonatomic,retain) PUEditingExtensionUndoAdapter * undoAdapter;              //@synthesize undoAdapter=_undoAdapter - In the implementation block
@property (assign,nonatomic) BOOL attemptUndoManagerAutoSetup;                         //@synthesize attemptUndoManagerAutoSetup=_attemptUndoManagerAutoSetup - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManagerForBarButtons;                 //@synthesize undoManagerForBarButtons=_undoManagerForBarButtons - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)_releaseSandboxExtensions;
-(void)beginContentEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)queryShouldShowCancelConfirmationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setupUndoProxyWithXPCListenerEndpoint:(id)arg1 attemptUndoManagerAutoSetup:(BOOL)arg2 ;
-(void)finishContentEditing;
-(void)cancelContentEditingWithResponseHandler:(/*^block*/id)arg1 ;
-(void)querySDKVersionWithResponseHandler:(/*^block*/id)arg1 ;
-(id)_contentEditingController;
-(void)setUndoManagerForBarButtons:(NSUndoManager *)arg1 ;
-(PUEditingInitialPayload *)_initialPayload;
-(PUEditingExtensionUndoAdapter *)undoAdapter;
-(void)setUndoAdapter:(PUEditingExtensionUndoAdapter *)arg1 ;
-(BOOL)attemptUndoManagerAutoSetup;
-(void)setAttemptUndoManagerAutoSetup:(BOOL)arg1 ;
-(NSUndoManager *)undoManagerForBarButtons;
-(void)dealloc;
@end

