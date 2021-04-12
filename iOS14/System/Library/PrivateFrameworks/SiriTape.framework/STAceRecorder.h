/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

