/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSRegionsValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetRegions; 
@property (nonatomic,readonly) NSArray * excludeRegions; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetRegions;
-(NSArray *)excludeRegions;
-(id)initWithTargetRegions:(id)arg1 excludeRegions:(id)arg2 ;
@end

