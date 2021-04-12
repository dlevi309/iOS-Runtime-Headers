/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 watchListed:(BOOL)arg2 ;
-(void)setIsWatchListed:(BOOL)arg1 ;
-(NSString *)watchListIdentifier;
-(BOOL)isWatchListed;
-(void)toggleWatchListWithCompletion:(/*^block*/id)arg1 ;
@end

