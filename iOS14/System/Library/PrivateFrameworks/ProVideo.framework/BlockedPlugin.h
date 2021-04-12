/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleName;
-(void)dealloc;
-(id)init:(id)arg1 plugName:(id)arg2 plugVersion:(id)arg3 ;
-(NSString *)plugName;
-(NSString *)plugVersion;
@end

