/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHAJobConstraints : NSObject <NSCopying> {

	BOOL _canRunAutomaticBackgroundAnalysis;
	BOOL _canRunAutomaticForegroundAnalysis;
	BOOL _canRunUserInitiatedForegroundAnalysis;
	BOOL _canUseNetwork;
	BOOL _turboMode;
	BOOL _cancelsTurboMode;

}

@property (assign,getter=isTurboMode,nonatomic) BOOL turboMode;                         //@synthesize turboMode=_turboMode - In the implementation block
@property (assign,nonatomic) BOOL cancelsTurboMode;                                     //@synthesize cancelsTurboMode=_cancelsTurboMode - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticBackgroundAnalysis;                  //@synthesize canRunAutomaticBackgroundAnalysis=_canRunAutomaticBackgroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticForegroundAnalysis;                  //@synthesize canRunAutomaticForegroundAnalysis=_canRunAutomaticForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunUserInitiatedForegroundAnalysis;              //@synthesize canRunUserInitiatedForegroundAnalysis=_canRunUserInitiatedForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canUseNetwork;                                      //@synthesize canUseNetwork=_canUseNetwork - In the implementation block
+(id)constraintsWithNoAllowances;
+(id)constraintsWithAllAllowances;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg1 canRunAutomaticForegroundAnalysis:(BOOL)arg2 canRunUserInitiatedForegroundAnalysis:(BOOL)arg3 canUseNetwork:(BOOL)arg4 ;
-(id)initFromBitString:(id)arg1 ;
-(id)asBitString;
-(void)applyConstraints:(id)arg1 usingMask:(id)arg2 ;
-(unsigned)qosClassForProcessing;
-(id)statusAsDictionary;
-(BOOL)canRunAutomaticBackgroundAnalysis;
-(BOOL)canRunAutomaticForegroundAnalysis;
-(BOOL)canRunUserInitiatedForegroundAnalysis;
-(BOOL)canUseNetwork;
-(BOOL)isTurboMode;
-(void)setTurboMode:(BOOL)arg1 ;
-(BOOL)cancelsTurboMode;
-(void)setCancelsTurboMode:(BOOL)arg1 ;
@end

