/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKRequest.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKAddFavoriteRequest : WLKRequest {

	NSString* _channelID;
	NSString* _canonicalID;
	NSString* _statsID;
	NSString* _bundleID;
	NSString* _externalID;
	WLKWatchListModificationResponse* _response;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;                              //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * statsID;                                  //@synthesize statsID=_statsID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                               //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) WLKWatchListModificationResponse * response;              //@synthesize response=_response - In the implementation block
-(NSString *)bundleID;
-(WLKWatchListModificationResponse *)response;
-(NSString *)externalID;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStatsID:(id)arg1 ;
-(NSString *)statsID;
-(id)initWithBundleID:(id)arg1 externalID:(id)arg2 ;
@end

