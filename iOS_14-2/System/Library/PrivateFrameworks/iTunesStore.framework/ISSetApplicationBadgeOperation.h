/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)uniqueKey;
-(void)run;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

