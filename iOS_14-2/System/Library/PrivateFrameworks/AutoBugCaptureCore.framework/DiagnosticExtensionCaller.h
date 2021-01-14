/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@class DEExtensionManager, NSMutableArray;

@interface DiagnosticExtensionCaller : NSObject {

	DEExtensionManager* _manager;
	NSMutableArray* _liveDEs;

}
+(id)sharedInstance;
+(BOOL)getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)init;
-(id)_getDEExtensionWithIdentifier:(id)arg1 ;
-(BOOL)_getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
@end

