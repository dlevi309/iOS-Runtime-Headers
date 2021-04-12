/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class NSString;

@interface SearchUIWatchListUtilities : NSObject {

	BOOL _isWatchListed;
	NSString* _watchListIdentifier;

}

@property (assign,nonatomic) BOOL isWatchListed;                          //@synthesize isWatchListed=_isWatchListed - In the implementation block
@property (nonatomic,retain) NSString * watchListIdentifier;              //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
+(void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(BOOL)isWatchListed;
-(void)toggleWatchListWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 watchListed:(BOOL)arg2 ;
-(void)setIsWatchListed:(BOOL)arg1 ;
@end

