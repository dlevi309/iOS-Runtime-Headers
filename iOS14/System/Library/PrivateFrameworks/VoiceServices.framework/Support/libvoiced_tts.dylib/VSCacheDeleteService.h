/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@interface VSCacheDeleteService : NSObject
+(id)sharedService;
-(id)purgeableVoiceAssetsWithInfo:(id)arg1 urgency:(int)arg2 ;
-(long long)totalSizeOfAssets:(id)arg1 ;
-(BOOL)registerCacheDelete;
-(id)purgeImpl:(id)arg1 urgency:(int)arg2 ;
-(id)purgeable:(id)arg1 urgency:(int)arg2 ;
-(id)purge:(id)arg1 urgency:(int)arg2 ;
-(id)periodic:(id)arg1 urgency:(int)arg2 ;
@end

