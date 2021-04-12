/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)debugDescription;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SignpostCAProcessStallAggregation *)systemAggregation;
-(NSDictionary *)executablePathToStallAggregation;
-(void)_addSystemDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 ;
-(void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 procExecutablePath:(id)arg3 responsiblePID:(int)arg4 aggregateForSystem:(BOOL)arg5 ;
@end

