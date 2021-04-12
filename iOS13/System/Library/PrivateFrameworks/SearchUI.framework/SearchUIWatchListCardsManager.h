/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSHashTable, NSString, WLKCanonicalPlayablesResponse, SearchUIWatchListUtilities;

@interface SearchUIWatchListCardsManager : NSObject {

	BOOL _isInUpNext;
	NSHashTable* _rowModels;
	NSString* _watchListIdentifier;
	WLKCanonicalPlayablesResponse* _response;
	SearchUIWatchListUtilities* _watchListUtility;

}

@property (nonatomic,retain) NSHashTable * rowModels;                                    //@synthesize rowModels=_rowModels - In the implementation block
@property (nonatomic,retain) NSString * watchListIdentifier;                             //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,retain) WLKCanonicalPlayablesResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) SearchUIWatchListUtilities * watchListUtility;              //@synthesize watchListUtility=_watchListUtility - In the implementation block
@property (assign,nonatomic) BOOL isInUpNext;                                            //@synthesize isInUpNext=_isInUpNext - In the implementation block
+(BOOL)isUpNextCardSection:(id)arg1 ;
-(WLKCanonicalPlayablesResponse *)response;
-(void)setResponse:(WLKCanonicalPlayablesResponse *)arg1 ;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(id)initWithWatchListIdentifier:(id)arg1 ;
-(BOOL)isTappable;
-(void)setRowModels:(NSHashTable *)arg1 ;
-(void)setWatchListUtility:(SearchUIWatchListUtilities *)arg1 ;
-(void)setIsInUpNext:(BOOL)arg1 ;
-(NSHashTable *)rowModels;
-(id)currentUpNextTextForRowModel:(id)arg1 ;
-(long long)currentUpNextButtonState;
-(SearchUIWatchListUtilities *)watchListUtility;
-(void)addWatchListRowModelObserver:(id)arg1 ;
-(void)toggleUpNextWithDelegate:(id)arg1 ;
-(BOOL)isInUpNext;
@end

