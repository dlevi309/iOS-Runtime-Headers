/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BKSHIDEventDeferringEnvironment, NSString;

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying> {

	BKSHIDEventDeferringEnvironment* _environment;
	int _pid;

}

@property (nonatomic,readonly) int pid;                                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringEnvironment * deferringEnvironment;              //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)focusTargetForPID:(int)arg1 ;
+(id)targetForDeferringEnvironment:(id)arg1 ;
+(id)keyboardFocusTarget;
+(id)targetForPID:(int)arg1 environment:(id)arg2 ;
+(id)systemTarget;
-(int)pid;
-(id)init;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithEnvironment:(id)arg1 pid:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
-(BOOL)isEqual:(id)arg1 ;
@end

