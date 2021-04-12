/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableDictionary, NSMapTable;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {

	NSMutableDictionary* _languages;
	NSMapTable* _pendingSaves;
	/*^block*/id _languageUpdated;

}

@property (nonatomic,copy) id languageUpdated;              //@synthesize languageUpdated=_languageUpdated - In the implementation block
-(id)init;
-(void)dealloc;
-(void)languagesChanged:(id)arg1 ;
-(void)languagePulled:(id)arg1 ;
-(void)willLoadLanguage:(id)arg1 ;
-(void)noteObject:(id)arg1 forLanguage:(id)arg2 ;
-(BOOL)shouldCacheObject:(id)arg1 ;
-(id)languageUpdated;
-(void)setLanguageUpdated:(id)arg1 ;
@end

