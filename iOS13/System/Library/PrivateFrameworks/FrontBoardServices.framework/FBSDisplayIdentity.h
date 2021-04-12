/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	long long _type;
	unsigned _displayID;
	unsigned _connectionSeed;
	int _pid;
	BOOL _external;
	NSString* _uniqueIdentifier;
	BOOL _secure;
	FBSDisplayIdentity* _rootIdentity;

}

@property (getter=isSecure,nonatomic,readonly) BOOL secure;                                            //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) int pid;                                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayIdentity * rootIdentity; 
@property (nonatomic,readonly) BOOL isRootIdentity; 
@property (getter=isMainDisplay,nonatomic,readonly) BOOL mainDisplay; 
@property (getter=isExternal,nonatomic,readonly) BOOL external;                                        //@synthesize external=_external - In the implementation block
@property (getter=isCarDisplay,nonatomic,readonly) BOOL carDisplay; 
@property (getter=isCarInstrumentsDisplay,nonatomic,readonly) BOOL carInstrumentsDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(int)pid;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isSecure;
-(unsigned)displayID;
-(BOOL)isCarDisplay;
-(BOOL)isMainDisplay;
-(FBSDisplayIdentity *)rootIdentity;
-(BOOL)isRootIdentity;
-(BOOL)isExternal;
-(BOOL)isCarInstrumentsDisplay;
-(BOOL)expectsSecureRendering;
-(id)_initWithType:(long long)arg1 displayID:(unsigned)arg2 connectionSeed:(unsigned)arg3 pid:(int)arg4 external:(BOOL)arg5 uniqueIdentifier:(id)arg6 secure:(BOOL)arg7 root:(id)arg8 ;
-(unsigned)connectionSeed;
-(BOOL)isMainRootDisplay;
-(BOOL)isAirPlayDisplay;
-(BOOL)isRestrictedAirPlayDisplay;
-(BOOL)isiPodOnlyDisplay;
-(BOOL)isMusicOnlyDisplay;
@end

