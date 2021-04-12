/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableDictionary, NSMapTable;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {

	NSMutableDictionary* _languages;
	NSMapTable* _pendingSaves;
	/*^block*/id _languageUpdated;

}

@property (nonatomic,copy) id languageUpdated;              //@synthesize languageUpdated=_languageUpdated - In the implementation block
-(id)languageUpdated;
-(id)init;
-(void)willLoadLanguage:(id)arg1 ;
-(void)noteObject:(id)arg1 forLanguage:(id)arg2 ;
-(void)languagesChanged:(id)arg1 ;
-(BOOL)shouldCacheObject:(id)arg1 ;
-(void)languagePulled:(id)arg1 ;
-(void)dealloc;
-(void)setLanguageUpdated:(id)arg1 ;
@end

