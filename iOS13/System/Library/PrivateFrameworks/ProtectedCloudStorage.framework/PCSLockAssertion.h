/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(PCSLockManager *)manager;
-(void)setManager:(PCSLockManager *)arg1 ;
-(void)dropAssertion;
-(id)initAssertion:(id)arg1 manager:(id)arg2 ;
-(BOOL)holdAssertion;
-(BOOL)held;
-(void)setHeld:(BOOL)arg1 ;
@end

