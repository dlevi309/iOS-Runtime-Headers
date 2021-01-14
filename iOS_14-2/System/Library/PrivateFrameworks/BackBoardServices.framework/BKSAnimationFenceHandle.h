/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable>

@property (nonatomic,readonly) BSMachPortSendRight * trigger; 
@property (nonatomic,readonly) BOOL shouldIgnoreTrigger; 
@property (nonatomic,readonly) unsigned long long fenceName; 
@property (getter=isUsable,nonatomic,readonly) BOOL usable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newFenceHandleForCAFenceHandle:(id)arg1 ;
+(id)newSystemFenceHandle;
+(id)newFenceHandleForContext:(id)arg1 ;
-(BSMachPortSendRight *)trigger;
-(id)init;
-(BOOL)isUsable;
-(id)CAFenceHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(BOOL)shouldIgnoreTrigger;
-(id)_init;
-(unsigned long long)fenceName;
-(unsigned)CAPort;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

