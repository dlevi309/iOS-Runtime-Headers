/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)delegate;
-(void)setDelegate:(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)arg1 ;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3 ;
-(NSString *)finalDSID;
-(NSString *)initialDSID;
@end

