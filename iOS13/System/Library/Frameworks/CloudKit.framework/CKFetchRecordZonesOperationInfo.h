/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _ignorePCSFailures;
	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                          //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;              //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                           //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllRecordZonesOperation;
-(BOOL)ignorePCSFailures;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
@end

