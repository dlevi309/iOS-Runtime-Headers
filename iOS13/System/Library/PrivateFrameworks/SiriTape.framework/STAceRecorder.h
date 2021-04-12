/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/

#import <libobjc.A.dylib/STAceObjectHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface STAceRecorder : NSObject <STAceObjectHandler> {

	NSMutableDictionary* _timestampToAceObjs;
	NSMutableArray* _speechLogs;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)_startRecording;
-(void)_finishRecording;
-(void)handleClientCommand:(id)arg1 ;
-(void)handleServerCommand:(id)arg1 ;
-(BOOL)_createDirectoryIfNeededWithBaseURL:(id)arg1 ;
-(id)_libraryURLWithBaseURL:(id)arg1 date:(id)arg2 fileName:(id)arg3 ;
@end

