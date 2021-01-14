/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBiometricResource:(id)arg1 ;
-(BOOL)pearlMatchEnabledAndPossible;
-(void)setSeenMatchResultSinceScreenOn:(BOOL)arg1 ;
-(BOOL)seenMatchResultSinceScreenOn;
-(id<SBPearlMatchingStateProviderDelegate>)delegate;
-(id<SBUIBiometricResource>)biometricResource;
-(void)setDelegate:(id<SBPearlMatchingStateProviderDelegate>)arg1 ;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(void)reset;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
@end

