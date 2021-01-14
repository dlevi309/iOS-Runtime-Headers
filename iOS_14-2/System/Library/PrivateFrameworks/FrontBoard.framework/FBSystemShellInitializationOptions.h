/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying> {

	BOOL _initializeReadyForInteraction;
	BOOL _shouldWaitForMigrator;
	BOOL _resetDarkBootState;
	double _systemSleepInterval;
	/*^block*/id _registerServicesBlock;

}

@property (nonatomic,readonly) BOOL initializeReadyForInteraction;                   //@synthesize initializeReadyForInteraction=_initializeReadyForInteraction - In the implementation block
@property (nonatomic,readonly) BOOL resetDarkBootState;                              //@synthesize resetDarkBootState=_resetDarkBootState - In the implementation block
@property (nonatomic,readonly) BOOL shouldWaitForMigrator;                           //@synthesize shouldWaitForMigrator=_shouldWaitForMigrator - In the implementation block
@property (nonatomic,readonly) double systemSleepInterval;                           //@synthesize systemSleepInterval=_systemSleepInterval - In the implementation block
@property (nonatomic,copy,readonly) id registerAdditionalServicesBlock;              //@synthesize registerServicesBlock=_registerServicesBlock - In the implementation block
-(id)_initWithOptions:(id)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)initializeReadyForInteraction;
-(BOOL)resetDarkBootState;
-(BOOL)shouldWaitForMigrator;
-(double)systemSleepInterval;
-(id)registerAdditionalServicesBlock;
@end

