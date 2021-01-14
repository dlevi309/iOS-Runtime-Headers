/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderContext <NSObject>
@required
-(id)configurationManager;
-(void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
-(void)stopLoadingNextPage;
-(void)setReaderLanguageTag:(id)arg1;
-(void)clearAvailability;
-(void)loadNewArticle;
-(void)createArticleFinder;
-(void)decreaseReaderTextSize;
-(BOOL)canIncreaseReaderTextSize;
-(void)setReaderFont:(id)arg1;
-(void)deactivateReaderNow:(unsigned long long)arg1;
-(void)increaseReaderTextSize;
-(void)resetReaderTextSize;
-(BOOL)shouldCreateArticleFinder;
-(id)fontManager;
-(id)readerURL;
-(BOOL)isLoadingNextPage;
-(void)checkReaderAvailability;
-(void)clearUnusedReaderResourcesSoon;
-(BOOL)isReaderAvailable;
-(void)collectReaderContentForMailWithCompletion:(/*^block*/id)arg1;
-(id)scrollPositionInformation;
-(void)activateFont:(id)arg1;
-(void)clearReaderWebView;
-(void)activateReader;
-(BOOL)canDecreaseReaderTextSize;

@end

