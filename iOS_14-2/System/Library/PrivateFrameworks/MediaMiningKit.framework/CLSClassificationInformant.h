/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInformant.h>

@interface CLSClassificationInformant : CLSInformant
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)familyIdentifier;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(double)_confidenceForCount:(unsigned long long)arg1 mu:(double)arg2 sigma:(double)arg3 ;
@end

