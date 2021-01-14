/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFRelinquishableAssertion.h>

@class _AFAssertionRecord, AFAssertionCoordinator, NSUUID, AFAssertionContext, NSString;

@interface _AFAssertionProxy : NSObject <AFRelinquishableAssertion> {

	_AFAssertionRecord* _record;
	AFAssertionCoordinator* _coordinator;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) AFAssertionContext * context; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)uuid;
-(AFAssertionContext *)context;
-(NSString *)description;
-(void)relinquishWithContext:(id)arg1 ;
-(id)initWithRecord:(id)arg1 coordinator:(id)arg2 ;
-(void)dealloc;
@end

