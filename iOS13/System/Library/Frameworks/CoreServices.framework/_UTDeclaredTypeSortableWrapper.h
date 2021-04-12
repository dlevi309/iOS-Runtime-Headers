/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class _UTDeclaredType, _LSDatabase;

@interface _UTDeclaredTypeSortableWrapper : NSObject {

	_UTDeclaredType* _declaredType;
	_LSDatabase* _database;
	const SCD_Struct_UT22* _utypeData;

}

@property (nonatomic,retain) _UTDeclaredType * declaredType;                //@synthesize declaredType=_declaredType - In the implementation block
@property (assign,nonatomic) _LSDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) const SCD_Struct_UT22* utypeData;              //@synthesize utypeData=_utypeData - In the implementation block
-(long long)compare:(id)arg1 ;
-(void)setDatabase:(_LSDatabase *)arg1 ;
-(void)setDeclaredType:(_UTDeclaredType *)arg1 ;
-(void)setUtypeData:(const SCD_Struct_UT22*)arg1 ;
-(_UTDeclaredType *)declaredType;
-(const SCD_Struct_UT22*)utypeData;
-(_LSDatabase *)database;
@end

