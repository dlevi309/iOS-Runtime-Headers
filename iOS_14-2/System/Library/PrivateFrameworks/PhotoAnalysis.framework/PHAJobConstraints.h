/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCancelsTurboMode:(BOOL)arg1 ;
-(unsigned)qosClassForProcessing;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(BOOL)canRunUserInitiatedForegroundAnalysis;
-(id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg1 canRunAutomaticForegroundAnalysis:(BOOL)arg2 canRunUserInitiatedForegroundAnalysis:(BOOL)arg3 canUseNetwork:(BOOL)arg4 ;
-(BOOL)isTurboMode;
-(BOOL)canRunAutomaticForegroundAnalysis;
-(id)asBitString;
-(id)description;
-(id)initFromBitString:(id)arg1 ;
-(id)statusAsDictionary;
-(BOOL)canRunAutomaticBackgroundAnalysis;
-(void)applyConstraints:(id)arg1 usingMask:(id)arg2 ;
-(BOOL)cancelsTurboMode;
-(BOOL)canUseNetwork;
-(void)setTurboMode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

