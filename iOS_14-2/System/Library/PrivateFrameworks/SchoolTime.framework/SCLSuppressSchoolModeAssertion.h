/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


#import <SchoolTime/SchoolTime-Structs.h>
@class NSUUID, NSXPCConnection, NSString;

@interface SCLSuppressSchoolModeAssertion : NSObject {

	os_unfair_lock_s _lock;
	NSUUID* _UUID;
	NSXPCConnection* _connection;
	unsigned long long _state;
	NSString* _explanation;

}

@property (nonatomic,copy,readonly) NSString * explanation;              //@synthesize explanation=_explanation - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)connectionInvalidated;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(void)connectionInterrupted;
-(id)initWithExplanation:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(void)acquireWithInvalidationHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(NSString *)explanation;
@end

