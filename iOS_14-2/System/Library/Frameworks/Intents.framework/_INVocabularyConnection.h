/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_syncService;
-(id)settingsService;
-(void)_clearConnection;
-(id)_connection;
-(void)dealloc;
@end

