/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSAssetProcessedSignals_v1.h>
#import <libobjc.A.dylib/CLSNSFWProcessedSignals.h>

@interface CLSAssetProcessedSignals_v3 : CLSAssetProcessedSignals_v1 <CLSNSFWProcessedSignals> {

	unsigned _isRecallinglyNSFWExplicit : 1;
	unsigned _isNSFWExplicit : 1;

}

@property (assign,nonatomic) BOOL isRecallinglyNSFWExplicit;              //@synthesize isRecallinglyNSFWExplicit=_isRecallinglyNSFWExplicit - In the implementation block
@property (assign,nonatomic) BOOL isNSFWExplicit;                         //@synthesize isNSFWExplicit=_isNSFWExplicit - In the implementation block
-(void)setIsNSFWExplicit:(BOOL)arg1 ;
-(void)setIsRecallinglyNSFWExplicit:(BOOL)arg1 ;
-(BOOL)isRecallinglyNSFWExplicit;
-(BOOL)isNSFWExplicit;
@end

