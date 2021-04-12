/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class CKContainer;

@interface IMDCKDatabaseManager : NSObject {

	CKContainer* _manateeContainer;
	CKContainer* _nonHSA2ManateeContainer;
	CKContainer* _nickNameContainer;

}

@property (nonatomic,readonly) CKContainer * manateeContainer;                     //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * nonHSA2ManateeContainer;              //@synthesize nonHSA2ManateeContainer=_nonHSA2ManateeContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * nickNameContainer;                    //@synthesize nickNameContainer=_nickNameContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * truthContainer; 
@property (nonatomic,readonly) BOOL useStingRay; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CKContainer *)truthContainer;
-(id)truthDatabase;
-(BOOL)useStingRay;
-(id)manateeDataBase;
-(id)nonHSA2ManateeDatabase;
-(BOOL)_serverSaysToUseOldContainer;
-(id)_nickNameContainerIdentifier;
-(CKContainer *)manateeContainer;
-(CKContainer *)nonHSA2ManateeContainer;
-(id)_nickNameContainer;
-(id)truthPublicDatabase;
-(id)nickNamePublicDatabase;
-(void)fetchCurrentUserForNicknameContainer:(/*^block*/id)arg1 ;
-(CKContainer *)nickNameContainer;
@end

