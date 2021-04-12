/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/

#import <SettingsCellular/PSAppCellularUsageSpecifier.h>

@class NSString;

@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier {

	BOOL _fullyInitialized;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 displayName:(id)arg2 statisticsCache:(id)arg3 ;
-(id)cellularUsagePolicy;
-(void)setCellularUsagePolicy:(id)arg1 ;
-(void)finishInitializing:(unsigned long long)arg1 ;
@end

