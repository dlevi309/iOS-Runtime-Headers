/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {

	NSString* _badgeValue;
	NSString* _bundleIdentifier;

}

@property (retain) NSString * badgeValue;                    //@synthesize badgeValue=_badgeValue - In the implementation block
@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)run;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(id)uniqueKey;
@end

