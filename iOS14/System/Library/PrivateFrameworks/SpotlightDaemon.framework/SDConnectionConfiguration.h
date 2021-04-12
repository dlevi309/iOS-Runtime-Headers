/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <libobjc.A.dylib/CSXPCConnectionConfiguration.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface SDConnectionConfiguration : NSObject <CSXPCConnectionConfiguration> {

	BOOL _internal;
	BOOL _searchInternal;
	BOOL _isExtension;
	BOOL _privateIndexNonSandboxAllowed;
	BOOL _isPrivate;
	BOOL _quotaDisabled;
	int _pid;
	unsigned _euid;
	unsigned _egid;
	NSObject*<OS_xpc_object> _connection;
	NSString* _protectionClass;
	NSString* _bundleID;
	NSString* _personaID;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * protectionClass;                      //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                            //@synthesize personaID=_personaID - In the implementation block
@property (nonatomic,readonly) int pid;                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned euid;                                   //@synthesize euid=_euid - In the implementation block
@property (nonatomic,readonly) unsigned egid;                                   //@synthesize egid=_egid - In the implementation block
@property (nonatomic,readonly) BOOL internal;                                   //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) BOOL searchInternal;                             //@synthesize searchInternal=_searchInternal - In the implementation block
@property (nonatomic,readonly) BOOL isExtension;                                //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,readonly) BOOL privateIndexNonSandboxAllowed;              //@synthesize privateIndexNonSandboxAllowed=_privateIndexNonSandboxAllowed - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                                  //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,readonly) BOOL quotaDisabled;                              //@synthesize quotaDisabled=_quotaDisabled - In the implementation block
-(unsigned)egid;
-(int)pid;
-(BOOL)privateIndexNonSandboxAllowed;
-(BOOL)internal;
-(NSString *)personaID;
-(unsigned)euid;
-(NSString *)protectionClass;
-(NSObject*<OS_xpc_object>)connection;
-(BOOL)searchInternal;
-(NSString *)bundleID;
-(BOOL)isPrivate;
-(id)initWithConnection:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)isExtension;
-(BOOL)quotaDisabled;
@end

