/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _INVocabularyConnection : NSObject {

	NSXPCConnection* _connection;
	id<INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_clearConnection;
-(id)_syncService;
-(id)settingsService;
@end

