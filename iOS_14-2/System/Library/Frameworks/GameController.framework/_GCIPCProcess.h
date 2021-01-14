/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class NSString, NSArray;


@protocol _GCIPCProcess
@property (readonly) SCD_Struct_GC23 auditToken; 
@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSArray * connections; 
@required
-(unsigned)effectiveUserIdentifier;
-(int)processIdentifier;
-(NSArray *)connections;
-(NSString *)bundleIdentifier;
-(SCD_Struct_GC23)auditToken;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;

@end

