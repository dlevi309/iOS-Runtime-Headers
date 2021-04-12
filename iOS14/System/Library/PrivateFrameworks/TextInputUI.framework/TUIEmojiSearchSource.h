/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@protocol OS_dispatch_queue, TUIEmojiSearchSourceDelegate;
@class NSString, NSArray, NSObject, NSLocale, EMFEmojiLocaleData;

@interface TUIEmojiSearchSource : NSObject {

	NSString* _exactQuery;
	NSString* _autocorrectedQuery;
	NSArray* _results;
	NSObject*<OS_dispatch_queue> _searchQueue;
	id<TUIEmojiSearchSourceDelegate> _delegate;
	NSArray* _multilingualSearchLocales;
	NSLocale* _locale;
	EMFEmojiLocaleData* _localeData;

}

@property (nonatomic,retain) NSLocale * locale;                                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) EMFEmojiLocaleData * localeData;                               //@synthesize localeData=_localeData - In the implementation block
@property (assign,nonatomic,__weak) id<TUIEmojiSearchSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * results;                                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSArray * suggestedEmojis; 
@property (nonatomic,retain) NSArray * multilingualSearchLocales;                           //@synthesize multilingualSearchLocales=_multilingualSearchLocales - In the implementation block
-(id)initWithLocale:(id)arg1 ;
-(NSArray *)results;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id<TUIEmojiSearchSourceDelegate>)delegate;
-(void)setDelegate:(id<TUIEmojiSearchSourceDelegate>)arg1 ;
-(EMFEmojiLocaleData *)localeData;
-(void)beginSearchForExactQuery:(id)arg1 autocorrectedQuery:(id)arg2 ;
-(BOOL)shouldSupplyVerbatimResultsFor:(id)arg1 ;
-(id)_filteredTokensIgnoringModifiers:(id)arg1 ;
-(NSArray *)suggestedEmojis;
-(id)_emojiResultSetForExactQuery:(id)arg1 autocorrectedQuery:(id)arg2 ;
-(id)languagesForMultilingualSearch;
-(id)_repeatSearchQuery:(id)arg1 forLocales:(id)arg2 ;
-(NSArray *)multilingualSearchLocales;
-(void)setLocaleData:(EMFEmojiLocaleData *)arg1 ;
-(void)_deliverResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3 ;
-(void)setMultilingualSearchLocales:(NSArray *)arg1 ;
@end

