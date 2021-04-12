/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString, NSArray;

@interface NTKCompanionSyncedComplication : NSObject {

	NSString* _companionBundleIdentifier;
	NSString* _fallbackName;
	NSString* _localizedName;
	NSString* _clientIdentifier;
	NSString* _appBundleIdentifier;
	NSArray* _supportedFamilies;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * supportedFamilies;                 //@synthesize supportedFamilies=_supportedFamilies - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
+(id)_stocksComplication:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)appBundleIdentifier;
-(NSString *)clientIdentifier;
-(id)initWithRemoteApplication:(id)arg1 supportedFamilies:(id)arg2 ;
-(NSArray *)supportedFamilies;
@end

