/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCIPCProcess.h>

@class NSString, NSArray, NSMutableSet;

@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess> {

	int _auditSessionIdentifier;
	int _processIdentifier;
	unsigned _effectiveUserIdentifier;
	unsigned _effectiveGroupIdentifier;
	NSString* _bundleIdentifier;
	NSArray* _connections;
	NSMutableSet* _connectionInvalidationRegistrations;
	SCD_Struct_GC23 _auditToken;

}

@property (copy) NSArray * connections;                                                       //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSMutableSet * connectionInvalidationRegistrations;              //@synthesize connectionInvalidationRegistrations=_connectionInvalidationRegistrations - In the implementation block
@property (readonly) SCD_Struct_GC23 auditToken;                                              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) int auditSessionIdentifier;                                              //@synthesize auditSessionIdentifier=_auditSessionIdentifier - In the implementation block
@property (readonly) int processIdentifier;                                                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (readonly) unsigned effectiveUserIdentifier;                                        //@synthesize effectiveUserIdentifier=_effectiveUserIdentifier - In the implementation block
@property (readonly) unsigned effectiveGroupIdentifier;                                       //@synthesize effectiveGroupIdentifier=_effectiveGroupIdentifier - In the implementation block
@property (readonly) NSString * bundleIdentifier;                                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)setConnections:(NSArray *)arg1 ;
-(unsigned)effectiveUserIdentifier;
-(id)initWithConnection:(id)arg1 ;
-(int)processIdentifier;
-(id)init;
-(NSArray *)connections;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(SCD_Struct_GC23)auditToken;
-(id)description;
-(void)addConnection:(id)arg1 ;
-(BOOL)isEqualToProcess:(id)arg1 ;
-(int)auditSessionIdentifier;
-(unsigned long long)hash;
-(unsigned)effectiveGroupIdentifier;
-(void)setConnectionInvalidationRegistrations:(NSMutableSet *)arg1 ;
-(id)redactedDescription;
-(NSMutableSet *)connectionInvalidationRegistrations;
-(BOOL)isEqual:(id)arg1 ;
@end

