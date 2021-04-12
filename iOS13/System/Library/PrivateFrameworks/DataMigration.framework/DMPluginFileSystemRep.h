/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class NSString, NSBundle;

@interface DMPluginFileSystemRep : NSObject {

	NSString* _name;
	NSString* _path;
	NSBundle* _bundle;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)allReps;
-(NSString *)name;
-(NSString *)path;
-(NSString *)bundleIdentifier;
-(id)initWithName:(id)arg1 atEnclosingPath:(id)arg2 ;
-(BOOL)isBundleValid;
@end

