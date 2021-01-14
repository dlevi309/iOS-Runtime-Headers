/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(id)_descriptionForPort:(unsigned)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4 ;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
+(xpc_type_sRef)_decodeType;
+(id)_rightDescription;
-(unsigned)port;
-(unsigned)rawPort;
-(id)_lock_encodePort:(unsigned)arg1 ;
-(NSString *)trace;
-(id)init;
-(BOOL)isUsable;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

