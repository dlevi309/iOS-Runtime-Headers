/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(NSString *)watchListIdentifier;
-(void)setRowModels:(NSHashTable *)arg1 ;
-(void)setWatchListUtility:(SearchUIWatchListUtilities *)arg1 ;
-(void)setIsInUpNext:(BOOL)arg1 ;
-(NSHashTable *)rowModels;
-(id)currentUpNextTextForRowModel:(id)arg1 ;
-(long long)currentUpNextButtonState;
-(WLKCanonicalPlayablesResponse *)response;
-(void)setResponse:(WLKCanonicalPlayablesResponse *)arg1 ;
-(SearchUIWatchListUtilities *)watchListUtility;
-(void)addWatchListRowModelObserver:(id)arg1 ;
-(void)toggleUpNextWithDelegate:(id)arg1 ;
-(BOOL)isInUpNext;
-(BOOL)isTappable;
-(id)initWithWatchListIdentifier:(id)arg1 ;
@end

