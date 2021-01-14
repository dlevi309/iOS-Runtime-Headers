/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@interface CKDPQLUpgradeInfo : NSObject {

	BOOL _shouldVacuum;
	BOOL _shouldTruncateDatabase;
	unsigned long long _version;
	/*function pointer*/void* _upgradeFunction;

}

@property (assign,nonatomic) unsigned long long version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* upgradeFunction;              //@synthesize upgradeFunction=_upgradeFunction - In the implementation block
@property (assign,nonatomic) BOOL shouldVacuum;                                      //@synthesize shouldVacuum=_shouldVacuum - In the implementation block
@property (assign,nonatomic) BOOL shouldTruncateDatabase;                            //@synthesize shouldTruncateDatabase=_shouldTruncateDatabase - In the implementation block
+(id)upgradeInfoWithVersion:(unsigned long long)arg1 function:(/*function pointer*/void*)arg2 shouldVacuum:(BOOL)arg3 shouldTruncate:(BOOL)arg4 ;
-(id)initWithVersion:(unsigned long long)arg1 function:(/*function pointer*/void*)arg2 shouldVacuum:(BOOL)arg3 shouldTruncate:(BOOL)arg4 ;
-(void)setUpgradeFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)upgradeFunction;
-(void)setShouldTruncateDatabase:(BOOL)arg1 ;
-(BOOL)shouldTruncateDatabase;
-(void)setVersion:(unsigned long long)arg1 ;
-(BOOL)shouldVacuum;
-(unsigned long long)version;
-(void)setShouldVacuum:(BOOL)arg1 ;
@end

