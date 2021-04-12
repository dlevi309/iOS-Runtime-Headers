/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPhotoLibraryOptions : NSObject {

	BOOL _automaticallyMergesContext;
	BOOL _preventsWaitingForRequiredState;
	int _libraryRole;
	long long _requiredState;

}

@property (assign,nonatomic) BOOL automaticallyMergesContext;                   //@synthesize automaticallyMergesContext=_automaticallyMergesContext - In the implementation block
@property (assign,nonatomic) long long requiredState;                           //@synthesize requiredState=_requiredState - In the implementation block
@property (assign,nonatomic) int libraryRole;                                   //@synthesize libraryRole=_libraryRole - In the implementation block
@property (assign,nonatomic) BOOL preventsWaitingForRequiredState;              //@synthesize preventsWaitingForRequiredState=_preventsWaitingForRequiredState - In the implementation block
-(BOOL)automaticallyMergesContext;
-(BOOL)preventsWaitingForRequiredState;
-(long long)requiredState;
-(void)setAutomaticallyMergesContext:(BOOL)arg1 ;
-(void)setRequiredState:(long long)arg1 ;
-(void)setLibraryRole:(int)arg1 ;
-(int)libraryRole;
-(void)setPreventsWaitingForRequiredState:(BOOL)arg1 ;
@end

