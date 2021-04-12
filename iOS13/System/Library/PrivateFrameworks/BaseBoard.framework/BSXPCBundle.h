/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)mainBundle;
+(id)bundleWithXPCBundle:(id)arg1 ;
+(id)bundleForPID:(int)arg1 ;
+(id)bundleWithExecutablePath:(id)arg1 ;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSDictionary *)infoDictionary;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithXPCBundle:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcBundle;
@end

