/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLModelMigratorRebuildProgressFraction : NSObject {

	BOOL _legacyRecoveryEnabled;
	BOOL _rebuildEnabled;

}

@property (assign,getter=isRebuildEnabled,nonatomic) BOOL rebuildEnabled;              //@synthesize rebuildEnabled=_rebuildEnabled - In the implementation block
@property (readonly) BOOL isLegacyRecoveryEnabled; 
-(float)progressFractionForType:(unsigned char)arg1 ;
-(BOOL)isLegacyRecoveryEnabled;
-(void)setRebuildEnabled:(BOOL)arg1 ;
-(id)initWithLegacyRecoveryEnabled:(BOOL)arg1 ;
-(BOOL)isRebuildEnabled;
@end

