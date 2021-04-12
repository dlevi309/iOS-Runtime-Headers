/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)infoDictionary;
-(NSString *)executablePath;
-(id)stringProperty:(int)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)set_bundle:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)path;
-(NSObject*<OS_xpc_object>)_bundle;
-(id)initWithExecutablePath:(id)arg1 ;
-(NSURL *)url;
-(id)initWithExecutableURL:(id)arg1 ;
-(id)bundleDirectory:(id)arg1 ;
-(id)initForMainBundle;
-(NSString *)plugInsPath;
-(id)initWithXPCBundle:(id)arg1 ;
-(NSString *)supportPath;
@end

