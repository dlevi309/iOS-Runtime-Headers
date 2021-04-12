/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>
#import <libobjc.A.dylib/SBPearlMatchingStateProvider.h>

@protocol SBPearlMatchingStateProviderDelegate, SBUIBiometricResource;
@class NSString;

@interface SBCoverSheetBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider> {

	BOOL _seenMatchResultSinceScreenOn;
	id<SBPearlMatchingStateProviderDelegate> _delegate;
	id<SBUIBiometricResource> _biometricResource;

}

@property (assign,nonatomic) BOOL seenMatchResultSinceScreenOn;                                     //@synthesize seenMatchResultSinceScreenOn=_seenMatchResultSinceScreenOn - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIBiometricResource> biometricResource;                    //@synthesize biometricResource=_biometricResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBPearlMatchingStateProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL pearlMatchEnabledAndPossible; 
-(id<SBPearlMatchingStateProviderDelegate>)delegate;
-(void)setDelegate:(id<SBPearlMatchingStateProviderDelegate>)arg1 ;
-(void)reset;
-(id<SBUIBiometricResource>)biometricResource;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(id)initWithBiometricResource:(id)arg1 ;
-(BOOL)seenMatchResultSinceScreenOn;
-(BOOL)pearlMatchEnabledAndPossible;
-(void)setSeenMatchResultSinceScreenOn:(BOOL)arg1 ;
-(void)setSeenMatchResultSinceScreenOn:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
@end

