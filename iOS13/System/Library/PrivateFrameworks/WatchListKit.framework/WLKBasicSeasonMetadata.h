/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSNumber, NSString;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata {

	NSNumber* _seasonNumber;
	NSString* _canonicalShowID;

}

@property (nonatomic,readonly) NSNumber * seasonNumber;                      //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalShowID;              //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
+(id)seasonsWithDictionaries:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)seasonNumber;
-(NSString *)canonicalShowID;
@end

