/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInformant.h>

@interface CLSClassificationInformant : CLSInformant
+(id)classIdentifier;
+(id)familyIdentifier;
+(id)informantDependenciesIdentifiers;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(double)_confidenceForCount:(unsigned long long)arg1 mu:(double)arg2 sigma:(double)arg3 ;
@end

