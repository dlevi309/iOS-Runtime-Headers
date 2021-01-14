/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/

#import <SettingsCellular/PSAppCellularUsageSpecifier.h>

@class NSString;

@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier {

	BOOL _fullyInitialized;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)initWithBundleID:(id)arg1 displayName:(id)arg2 statisticsCache:(id)arg3 ;
-(id)cellularUsagePolicy;
-(void)setCellularUsagePolicy:(id)arg1 ;
-(void)finishInitializing:(unsigned long long)arg1 ;
@end

