/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSOperatingSystemVersionRange : NSObject {

	NSString* _family;
	SCD_Struct_WB5 _minimumVersion;
	SCD_Struct_WB5 _maximumVersion;

}

@property (nonatomic,readonly) NSString * family;                          //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WB5 minimumVersion;              //@synthesize minimumVersion=_minimumVersion - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WB5 maximumVersion;              //@synthesize maximumVersion=_maximumVersion - In the implementation block
+(id)defaultCloudBookmarksEligibleOperatingSystemRanges;
-(NSString *)family;
-(SCD_Struct_WB5)minimumVersion;
-(BOOL)includesOperatingSystemVersion:(SCD_Struct_WB5)arg1 inFamily:(id)arg2 ;
-(id)initWithFamily:(id)arg1 minimumVersion:(SCD_Struct_WB5)arg2 maximumVersion:(SCD_Struct_WB5)arg3 ;
-(SCD_Struct_WB5)maximumVersion;
@end

