/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PASScoreInputSet.h>

@class NSString;

@interface PPScoreInputSet : NSObject <PASScoreInputSet>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)iterScoreInputsWithBlock:(/*^block*/id)arg1 ;
+(id)stringForScoreInput:(unsigned long long)arg1 ;
+(unsigned long long)maxScoreInput;
+(unsigned long long)scoreInputForString:(id)arg1 ;
+(id)scoreInputsToNames;
+(id)scoreInputKeys;
+(id)scoreInputSharedKeySet;
@end

