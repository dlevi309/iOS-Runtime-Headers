/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface NUSchemaRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _schemas;
	NSMutableDictionary* _versions;

}
+(id)sharedRegistry;
-(id)init;
-(void)_registerBuiltInSchemas;
-(BOOL)registerSchema:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_registerSchema:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_registerVersion:(id)arg1 withOriginalIdentifier:(id)arg2 error:(out id*)arg3 ;
-(BOOL)registerSchemas:(id)arg1 error:(out id*)arg2 ;
-(id)schemaWithIdentifier:(id)arg1 ;
-(id)_schemaWithIdentifier:(id)arg1 ;
-(id)latestVersionWithNameSpace:(id)arg1 name:(id)arg2 ;
-(id)_latestVersionWithOriginalIdentifier:(id)arg1 ;
-(id)versionsCompatibleWithIdentifier:(id)arg1 ;
-(id)_allVersionsWithOriginalIdentifier:(id)arg1 upToVersion:(id)arg2 ;
@end

