/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@interface VSCacheDeleteService : NSObject
+(id)sharedService;
-(long long)totalSizeOfAssets:(id)arg1 ;
-(id)purgeableVoiceAssetsWithInfo:(id)arg1 urgency:(int)arg2 ;
-(id)purgeImpl:(id)arg1 urgency:(int)arg2 ;
-(id)purgeable:(id)arg1 urgency:(int)arg2 ;
-(id)purge:(id)arg1 urgency:(int)arg2 ;
-(id)periodic:(id)arg1 urgency:(int)arg2 ;
-(BOOL)registerCacheDelete;
@end

