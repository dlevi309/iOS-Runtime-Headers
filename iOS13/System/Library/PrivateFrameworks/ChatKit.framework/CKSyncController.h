/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKSyncController : NSObject {

	int _restoreStateChangedToken;
	int _attachmentRestoredToken;
	BOOL _restoring;

}

@property (assign,getter=isRestoring,nonatomic) BOOL restoring;              //@synthesize restoring=_restoring - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)isRestoring;
-(void)prioritizeAttachmentAtPath:(id)arg1 ;
-(void)attachmentRestored;
-(void)updateRestoreState;
-(void)setRestoring:(BOOL)arg1 ;
-(void)postAttachmentRestored;
@end

