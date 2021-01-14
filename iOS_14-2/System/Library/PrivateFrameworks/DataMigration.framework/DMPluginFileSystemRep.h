/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleIdentifier;
-(NSString *)path;
-(NSString *)name;
-(BOOL)isBundleValid;
-(id)initWithName:(id)arg1 atEnclosingPath:(id)arg2 ;
@end

