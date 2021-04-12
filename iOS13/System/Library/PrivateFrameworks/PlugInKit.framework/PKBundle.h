/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/


@protocol OS_xpc_object;
@class NSString, NSObject, NSURL, NSDictionary;

@interface PKBundle : NSObject {

	NSString* _supportPath;
	NSObject*<OS_xpc_object> __bundle;

}

@property (retain) NSObject*<OS_xpc_object> _bundle;              //@synthesize _bundle=__bundle - In the implementation block
@property (readonly) NSURL * url; 
@property (readonly) NSString * path; 
@property (readonly) NSDictionary * infoDictionary; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * supportPath;                      //@synthesize supportPath=_supportPath - In the implementation block
@property (readonly) NSString * executablePath; 
@property (readonly) NSString * plugInsPath; 
-(id)initWithURL:(id)arg1 ;
-(NSString *)path;
-(NSString *)bundleIdentifier;
-(id)initWithPath:(id)arg1 ;
-(NSDictionary *)infoDictionary;
-(NSString *)executablePath;
-(NSURL *)url;
-(NSObject*<OS_xpc_object>)_bundle;
-(id)initWithXPCBundle:(id)arg1 ;
-(id)initWithExecutablePath:(id)arg1 ;
-(void)set_bundle:(NSObject*<OS_xpc_object>)arg1 ;
-(id)stringProperty:(int)arg1 ;
-(NSString *)supportPath;
-(id)bundleDirectory:(id)arg1 ;
-(id)initForMainBundle;
-(id)initWithExecutableURL:(id)arg1 ;
-(NSString *)plugInsPath;
@end

