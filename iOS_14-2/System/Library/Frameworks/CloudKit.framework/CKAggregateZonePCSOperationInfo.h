/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _sourceZoneIDs;
	CKRecordZone* _targetZone;

}

@property (nonatomic,retain) NSArray * sourceZoneIDs;                //@synthesize sourceZoneIDs=_sourceZoneIDs - In the implementation block
@property (nonatomic,retain) CKRecordZone * targetZone;              //@synthesize targetZone=_targetZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(CKRecordZone *)targetZone;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)sourceZoneIDs;
-(void)setSourceZoneIDs:(NSArray *)arg1 ;
-(void)setTargetZone:(CKRecordZone *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

