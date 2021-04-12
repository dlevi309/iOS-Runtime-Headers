/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalPlayablesRequest : WLKRequest {

	NSString* _canonicalID;
	NSString* _statsID;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * statsID;                  //@synthesize statsID=_statsID - In the implementation block
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStatsID:(id)arg1 ;
-(NSString *)statsID;
@end

