/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderContext <NSObject>
@required
-(void)clearAvailability;
-(void)loadNewArticle;
-(BOOL)isLoadingNextPage;
-(void)activateFont:(id)arg1;
-(void)checkReaderAvailability;
-(void)createArticleFinder;
-(void)setReaderLanguageTag:(id)arg1;
-(BOOL)isReaderAvailable;
-(void)stopLoadingNextPage;
-(void)clearReaderWebView;
-(BOOL)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(unsigned long long)arg1;
-(id)scrollPositionInformation;
-(void)clearUnusedReaderResourcesSoon;
-(id)readerURL;
-(id)configurationManager;
-(id)fontManager;
-(void)collectReaderContentForMailWithCompletion:(/*^block*/id)arg1;
-(void)setReaderFont:(id)arg1;
-(void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
-(BOOL)canIncreaseReaderTextSize;
-(BOOL)canDecreaseReaderTextSize;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)resetReaderTextSize;

@end

