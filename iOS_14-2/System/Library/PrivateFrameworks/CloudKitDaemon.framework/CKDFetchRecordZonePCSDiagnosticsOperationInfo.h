/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKDFetchRecordZonePCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;              //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
@end

