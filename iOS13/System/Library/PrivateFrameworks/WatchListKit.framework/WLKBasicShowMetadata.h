/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {

	NSDate* _releaseDate;
	NSDate* _finaleDate;
	NSString* _network;

}

@property (nonatomic,readonly) NSDate * releaseDate;                 //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSDate * finaleDate;                  //@synthesize finaleDate=_finaleDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * network;              //@synthesize network=_network - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)network;
-(NSDate *)releaseDate;
-(NSDate *)finaleDate;
@end

