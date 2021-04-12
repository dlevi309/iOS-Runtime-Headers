/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKContainer *)truthContainer;
-(BOOL)useStingRay;
-(id)init;
-(BOOL)_serverSaysToUseOldContainer;
-(id)nonHSA2ManateeDatabase;
-(void)fetchCurrentUserForNicknameContainer:(/*^block*/id)arg1 ;
-(id)_nickNameContainerIdentifier;
-(id)truthDatabase;
-(CKContainer *)nonHSA2ManateeContainer;
-(id)_nickNameContainer;
-(id)nickNamePublicDatabase;
-(id)manateeDataBase;
-(CKContainer *)nickNameContainer;
-(id)truthPublicDatabase;
-(void)dealloc;
-(CKContainer *)manateeContainer;
@end

