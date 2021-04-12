/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class NSString;

@interface TLSystemApplication : NSObject {

	NSString* _bundleIdentifier;
	NSString* _name;

}

@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)defaultSystemApplication;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 ;
@end

