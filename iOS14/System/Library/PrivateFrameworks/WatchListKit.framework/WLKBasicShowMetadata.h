/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)releaseDate;
-(id)init;
-(NSString *)network;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)finaleDate;
@end

