/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SignpostCAProcessStallAggregation, NSDictionary;

@interface SignpostCAStallAggregation : NSObject <NSCopying> {

	SignpostCAProcessStallAggregation* _systemAggregation;
	NSDictionary* _executablePathToStallAggregation;

}

@property (nonatomic,readonly) SignpostCAProcessStallAggregation * systemAggregation;              //@synthesize systemAggregation=_systemAggregation - In the implementation block
@property (nonatomic,readonly) NSDictionary * executablePathToStallAggregation;                    //@synthesize executablePathToStallAggregation=_executablePathToStallAggregation - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SignpostCAProcessStallAggregation *)systemAggregation;
-(NSDictionary *)executablePathToStallAggregation;
-(void)_addSystemDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 ;
-(void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 procExecutablePath:(id)arg3 responsiblePID:(int)arg4 aggregateForSystem:(BOOL)arg5 ;
@end

