/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKSyncController : NSObject {

	int _restoreStateChangedToken;
	int _attachmentRestoredToken;
	BOOL _restoring;

}

@property (assign,getter=isRestoring,nonatomic) BOOL restoring;              //@synthesize restoring=_restoring - In the implementation block
+(id)sharedInstance;
-(BOOL)isRestoring;
-(id)init;
-(void)updateRestoreState;
-(void)prioritizeAttachmentAtPath:(id)arg1 ;
-(void)setRestoring:(BOOL)arg1 ;
-(void)attachmentRestored;
-(void)postAttachmentRestored;
@end

