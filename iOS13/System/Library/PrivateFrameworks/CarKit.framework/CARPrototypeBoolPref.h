/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <CarKit/CARPrototypePref.h>

@interface CARPrototypeBoolPref : CARPrototypePref

@property (nonatomic,readonly) BOOL invertValueForState; 
@property (nonatomic,readonly) BOOL valueBool; 
@property (nonatomic,readonly) BOOL cachedValueBool; 
+(id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 invertValueForState:(BOOL)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
-(id)description;
-(BOOL)state;
-(void)setState:(BOOL)arg1 ;
-(BOOL)cachedState;
-(void)setCachedState:(BOOL)arg1 ;
-(BOOL)valueBool;
-(BOOL)invertValueForState;
-(BOOL)cachedValueBool;
@end

