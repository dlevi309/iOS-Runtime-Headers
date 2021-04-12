/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/


@class NSString, PCSLockManager;

@interface PCSLockAssertion : NSObject {

	BOOL _held;
	NSString* _name;
	PCSLockManager* _manager;

}

@property (retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (retain) PCSLockManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (assign) BOOL held;                             //@synthesize held=_held - In the implementation block
-(BOOL)held;
-(void)setManager:(PCSLockManager *)arg1 ;
-(void)dropAssertion;
-(NSString *)name;
-(PCSLockManager *)manager;
-(void)setName:(NSString *)arg1 ;
-(void)setHeld:(BOOL)arg1 ;
-(void)dealloc;
-(id)initAssertion:(id)arg1 manager:(id)arg2 ;
-(BOOL)holdAssertion;
@end

