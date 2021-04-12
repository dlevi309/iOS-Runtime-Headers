/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetUserTypes; 
@property (nonatomic,readonly) NSArray * excludeUserTypes; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetUserTypes;
-(NSArray *)excludeUserTypes;
-(id)initWithTargetUserTypes:(id)arg1 excludeUserTypes:(id)arg2 ;
@end

