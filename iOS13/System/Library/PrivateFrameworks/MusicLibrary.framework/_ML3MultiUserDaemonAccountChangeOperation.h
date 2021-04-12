/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MediaServices/MSVAsyncOperation.h>

@protocol _ML3MultiUserDaemonAccountChangeOperationDelegate, MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation {

	NSString* _initialDSID;
	NSString* _finalDSID;
	id<_ML3MultiUserDaemonAccountChangeOperationDelegate> _delegate;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;

}

@property (nonatomic,retain) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;                      //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialDSID;                                                      //@synthesize initialDSID=_initialDSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * finalDSID;                                                        //@synthesize finalDSID=_finalDSID - In the implementation block
@property (assign,nonatomic,__weak) id<_ML3MultiUserDaemonAccountChangeOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)delegate;
-(void)setDelegate:(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)arg1 ;
-(void)execute;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3 ;
-(NSString *)finalDSID;
-(NSString *)initialDSID;
@end

