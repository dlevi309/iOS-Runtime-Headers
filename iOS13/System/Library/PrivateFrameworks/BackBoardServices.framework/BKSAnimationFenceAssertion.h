/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceAssertion : NSObject <BSXPCCoding, BSInvalidatable> {

	unsigned long long _fenceName;
	unsigned long long _assertionName;
	BSMachPortSendRight* _preFence;
	int _invalid;
	BOOL _shouldTrace;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newSystemFenceAssertionForTriggerPort:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isValid;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithFenceName:(unsigned long long)arg1 assertionName:(unsigned long long)arg2 preFence:(id)arg3 shouldTrace:(BOOL)arg4 ;
@end

