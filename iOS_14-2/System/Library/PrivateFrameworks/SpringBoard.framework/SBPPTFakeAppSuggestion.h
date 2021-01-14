/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class NSUUID, NSString;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {

	NSUUID* _uuid;
	NSString* _bundleIdentifier;

}
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)activityType;
-(id)bundleIdentifier;
-(id)uniqueIdentifier;
-(id)originatingDeviceName;
-(id)originatingDeviceType;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)suggestedLocationName;
@end

