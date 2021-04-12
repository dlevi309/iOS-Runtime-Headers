/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)statsID;
-(id)initWithStatsID:(id)arg1 ;
@end

