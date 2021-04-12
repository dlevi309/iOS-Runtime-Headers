/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 ;
@end

