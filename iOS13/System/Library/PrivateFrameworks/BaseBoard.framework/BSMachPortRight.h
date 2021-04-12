/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable> {

	os_unfair_lock_s _lock;
	unsigned _lock_port;
	unsigned _rawPort;
	int _owner;
	NSString* _trace;

}

@property (nonatomic,copy,readonly) NSString * trace;               //@synthesize trace=_trace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_rightDescription;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(id)_descriptionForPort:(unsigned)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4 ;
+(xpc_type_sRef)_decodeType;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)port;
-(BOOL)isUsable;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithPort:(unsigned)arg1 owner:(int)arg2 trace:(id)arg3 ;
-(BOOL)_lock_isUsable;
-(void)_lock_invalidate;
-(void)_lock_invalidateForOwner:(int)arg1 ;
-(id)_lock_encodePort:(unsigned)arg1 ;
-(NSString *)trace;
-(unsigned)rawPort;
-(void)_critical:(/*^block*/id)arg1 ;
@end

