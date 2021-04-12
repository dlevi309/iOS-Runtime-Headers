/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLModelMigratorRebuildProgressFraction : NSObject {

	BOOL _legacyRecoveryEnabled;
	BOOL _rebuildEnabled;

}

@property (assign,getter=isRebuildEnabled,nonatomic) BOOL rebuildEnabled;              //@synthesize rebuildEnabled=_rebuildEnabled - In the implementation block
@property (readonly) BOOL isLegacyRecoveryEnabled; 
-(BOOL)isLegacyRecoveryEnabled;
-(float)progressFractionForType:(unsigned char)arg1 ;
-(void)setRebuildEnabled:(BOOL)arg1 ;
-(id)initWithLegacyRecoveryEnabled:(BOOL)arg1 ;
-(BOOL)isRebuildEnabled;
@end

