/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)validate;
-(CKRecordZoneID *)zoneID;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(void)setShouldExist:(BOOL)arg1 ;
-(BOOL)shouldExist;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

