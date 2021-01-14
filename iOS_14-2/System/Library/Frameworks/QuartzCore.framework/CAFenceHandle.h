/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _handle_name;
	unsigned long long _fence_name;
	unsigned _port;
	Mutex _invalidation_mutex;
	SpinLock _lock;
	BOOL _invalidated;

}

@property (readonly) unsigned long long _name; 
@property (getter=isUsable,readonly) BOOL usable; 
@property (getter=isInvalidated,readonly) BOOL invalidated; 
+(BOOL)supportsSecureCoding;
+(id)handleFromXPCRepresentation:(id)arg1 ;
+(id)_newFenceFromServer:(unsigned)arg1 isObservable:(BOOL)arg2 ;
+(id)newFenceFromServer:(unsigned)arg1 ;
+(id)_newFenceWithPort:(unsigned)arg1 name:(unsigned long long)arg2 ;
+(id)newObservableFenceFromServer:(unsigned)arg1 ;
+(id)handleForPort:(unsigned)arg1 fenceId:(unsigned long long)arg2 ;
+(id)newFenceFromDefaultServer;
-(BOOL)isInvalidated;
-(id)init;
-(BOOL)isUsable;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)_copyPort;
-(id)_initWithPort:(unsigned)arg1 name:(unsigned long long)arg2 ;
-(void)_accessMachPort:(/*^block*/id)arg1 ;
-(unsigned long long)_name;
-(id)description;
-(id)createXPCRepresentation;
-(unsigned)copyPort;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)accessMachPort:(/*^block*/id)arg1 ;
-(id)_initWithXPCRepresentation:(id)arg1 ;
-(unsigned)_copyUntrackedPort;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)fenceId;
-(void)dealloc;
@end

