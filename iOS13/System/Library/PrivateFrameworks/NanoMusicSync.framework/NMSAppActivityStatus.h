/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSString;

@interface NMSAppActivityStatus : NSObject {

	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(id)description;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(BOOL)_exceedsDormancyIntervalForDate:(id)arg1 ;
-(BOOL)isAppDormant;
@end

