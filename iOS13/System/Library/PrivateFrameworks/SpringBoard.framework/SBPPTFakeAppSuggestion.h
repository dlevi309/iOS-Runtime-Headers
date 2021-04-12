/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class NSUUID, NSString;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {

	NSUUID* _uuid;
	NSString* _bundleIdentifier;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)bundleIdentifier;
-(id)activityType;
-(id)uniqueIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)originatingDeviceType;
-(id)originatingDeviceName;
-(id)suggestedLocationName;
@end

