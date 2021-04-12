/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSString;

@interface BlockedPlugin : NSObject {

	NSString* _bundleName;
	NSString* _plugName;
	NSString* _plugVersion;

}

@property (readonly) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (readonly) NSString * plugName;                 //@synthesize plugName=_plugName - In the implementation block
@property (readonly) NSString * plugVersion;              //@synthesize plugVersion=_plugVersion - In the implementation block
-(void)dealloc;
-(NSString *)bundleName;
-(id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3 ;
-(NSString *)plugName;
-(NSString *)plugVersion;
@end

