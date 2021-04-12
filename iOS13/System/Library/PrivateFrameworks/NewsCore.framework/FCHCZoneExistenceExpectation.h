/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCHCExpectation.h>

@class CKDatabase, CKRecordZoneID, NSString;

@interface FCHCZoneExistenceExpectation : NSObject <FCHCExpectation> {

	BOOL _shouldExist;
	CKDatabase* _database;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) CKDatabase * database;                 //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                 //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldExist;                      //@synthesize shouldExist=_shouldExist - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)validate;
-(void)setShouldExist:(BOOL)arg1 ;
-(BOOL)shouldExist;
@end

