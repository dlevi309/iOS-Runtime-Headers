/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)seasonNumber;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)canonicalShowID;
@end

