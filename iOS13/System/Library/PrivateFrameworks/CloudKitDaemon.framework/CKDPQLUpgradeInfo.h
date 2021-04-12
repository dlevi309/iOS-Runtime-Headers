/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(BOOL)shouldVacuum;
-(void)setShouldVacuum:(BOOL)arg1 ;
-(id)initWithVersion:(unsigned long long)arg1 function:(/*function pointer*/void*)arg2 shouldVacuum:(BOOL)arg3 shouldTruncate:(BOOL)arg4 ;
-(/*function pointer*/void*)upgradeFunction;
-(void)setUpgradeFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)shouldTruncateDatabase;
-(void)setShouldTruncateDatabase:(BOOL)arg1 ;
@end

