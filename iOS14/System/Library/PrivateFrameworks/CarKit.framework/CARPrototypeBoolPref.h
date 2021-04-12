/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <CarKit/CARPrototypePref.h>

@interface CARPrototypeBoolPref : CARPrototypePref

@property (nonatomic,readonly) BOOL invertValueForState; 
@property (nonatomic,readonly) BOOL valueBool; 
@property (nonatomic,readonly) BOOL cachedValueBool; 
+(id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 invertValueForState:(BOOL)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
-(BOOL)cachedState;
-(BOOL)cachedValueBool;
-(BOOL)valueBool;
-(id)description;
-(void)setState:(BOOL)arg1 ;
-(BOOL)state;
-(BOOL)invertValueForState;
-(void)setCachedState:(BOOL)arg1 ;
@end

