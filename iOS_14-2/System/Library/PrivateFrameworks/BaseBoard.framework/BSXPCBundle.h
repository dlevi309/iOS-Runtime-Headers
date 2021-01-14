/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_xpc_object;
@class NSString, NSDictionary, NSObject;

@interface BSXPCBundle : NSObject <BSDescriptionProviding> {

	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _executablePath;
	NSDictionary* _infoDictionary;
	NSObject*<OS_xpc_object> _xpcBundle;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                      //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                  //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * infoDictionary;              //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcBundle;              //@synthesize xpcBundle=_xpcBundle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleWithPath:(id)arg1 ;
+(id)bundleWithXPCBundle:(id)arg1 ;
+(id)bundleForPID:(int)arg1 ;
+(id)bundleWithExecutablePath:(id)arg1 ;
+(id)mainBundle;
-(NSDictionary *)infoDictionary;
-(id)succinctDescription;
-(NSString *)executablePath;
-(NSString *)bundlePath;
-(NSObject*<OS_xpc_object>)xpcBundle;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

