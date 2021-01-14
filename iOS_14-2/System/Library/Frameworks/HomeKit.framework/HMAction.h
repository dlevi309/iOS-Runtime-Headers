/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMFUnfairLock, NSUUID, _HMContext, HMActionSet, NSString;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	_HMContext* _context;
	HMActionSet* _actionSet;

}

@property (nonatomic,retain) _HMContext * context;                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long type; 
@property (copy) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (__weak) HMActionSet * actionSet;                                 //@synthesize actionSet=_actionSet - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) BOOL requiresDeviceUnlock; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(NSUUID *)uuid;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(HMActionSet *)actionSet;
-(id)init;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(BOOL)_handleUpdates:(id)arg1 ;
-(BOOL)isValid;
-(unsigned long long)type;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)_unconfigureContext;
-(BOOL)requiresDeviceUnlock;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(id)encodeAsProtoBuf;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithUUID:(id)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
@end

