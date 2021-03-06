/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@class NSMutableDictionary;

@interface OSALegacyXform : NSObject {

	NSMutableDictionary* _templates;

}
-(BOOL)transformLines:(id)arg1 withDefinitions:(id)arg2 body:(id)arg3 header:(id)arg4 error:(id*)arg5 streamingBlock:(/*^block*/id)arg6 ;
-(id)_getValueForKey:(id)arg1 fromBody:(id)arg2 orHeader:(id)arg3 ;
-(id)formatCallstacks:(id)arg1 withImages:(id)arg2 andLegacyInfo:(id)arg3 macosStyle:(BOOL)arg4 ;
-(id)formatArm64ThreadState:(id)arg1 ;
-(id)formatArm32ThreadState:(id)arg1 ;
-(id)formatX86ThreadState:(id)arg1 ;
-(id)formatImages:(id)arg1 withLegacyInfo:(id)arg2 macosStyle:(BOOL)arg3 ;
-(BOOL)prepareTemplate:(id)arg1 forLogType:(id)arg2 error:(id*)arg3 ;
-(BOOL)transformJSON:(id)arg1 header:(id)arg2 error:(id*)arg3 streamingBlock:(/*^block*/id)arg4 ;
@end

