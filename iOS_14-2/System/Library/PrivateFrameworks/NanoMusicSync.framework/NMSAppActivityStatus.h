/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSString;

@interface NMSAppActivityStatus : NSObject {

	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(id)initWithBundleID:(id)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(BOOL)_exceedsDormancyIntervalForDate:(id)arg1 ;
-(BOOL)isAppDormant;
@end

