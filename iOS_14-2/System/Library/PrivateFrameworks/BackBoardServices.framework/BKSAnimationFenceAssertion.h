/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)description;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(id)_initWithFenceName:(unsigned long long)arg1 assertionName:(unsigned long long)arg2 preFence:(id)arg3 shouldTrace:(BOOL)arg4 ;
-(void)dealloc;
@end

