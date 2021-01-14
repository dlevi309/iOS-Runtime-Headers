/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CFMorphunAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSMutableDictionary* _assetPaths;

}
+(id)sharedMorphunAssetsManager;
-(id)init;
-(id)_getNewMorphunPathForLanguage:(id)arg1 ;
-(id)replaceLanguageCodeFormat:(id)arg1 ;
-(id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2 ;
-(id)morphunAssetsPathForLanguage:(id)arg1 ;
-(void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerPath:(id)arg1 withLanguage:(id)arg2 ;
@end

