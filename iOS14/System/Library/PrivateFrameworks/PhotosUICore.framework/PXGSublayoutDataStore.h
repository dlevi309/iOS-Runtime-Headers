/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSString;

@interface PXGSublayoutDataStore : NSObject <PXGDiagnosticsProvider> {

	long long _capacity;
	long long _count;
	SCD_Struct_PX89* _geometries;
	SCD_Struct_PX90* _infos;
	long long _version;

}

@property (assign,nonatomic) long long count;                                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX89* geometries;                        //@synthesize geometries=_geometries - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX90* infos;                             //@synthesize infos=_infos - In the implementation block
@property (nonatomic,readonly) long long version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCount:(long long)arg1 ;
-(void)removeSublayoutsInRange:(NSRange)arg1 ;
-(void)enumerateSublayoutGeometriesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned)spriteIndexOriginForSublayout:(id)arg1 ;
-(long long)count;
-(void)enumerateSublayoutsUsingBlock:(/*^block*/id)arg1 ;
-(id)sublayoutProviderAtIndex:(long long)arg1 ;
-(SCD_Struct_PX89*)geometries;
-(SCD_Struct_PX90*)infos;
-(void)enumerateSublayoutGeometriesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)diagnosticDescription;
-(void)enumerateSublayoutsInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_insertRange:(NSRange)arg1 ;
-(id)sublayoutAtIndex:(long long)arg1 ;
-(void)insertSublayoutProvider:(id)arg1 inRange:(NSRange)arg2 ;
-(void)enumerateSublayoutsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)indexOfSublayout:(id)arg1 ;
-(void)insertSublayout:(id)arg1 atIndex:(long long)arg2 ;
-(long long)version;
-(void)_invalidateVersion;
-(void)dealloc;
-(SCD_Struct_PX89)geometryForSublayout:(id)arg1 ;
@end

