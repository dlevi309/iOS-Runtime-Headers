/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID;

@interface CKDAssetZoneKey : NSObject <NSCopying> {

	CKRecordZoneID* _destinationZoneID;
	CKRecordZoneID* _sourceZoneID;
	long long _sourceDatabaseScope;
	long long _destinationDatabaseScope;

}

@property (nonatomic,retain) CKRecordZoneID * destinationZoneID;              //@synthesize destinationZoneID=_destinationZoneID - In the implementation block
@property (assign,nonatomic) long long destinationDatabaseScope;              //@synthesize destinationDatabaseScope=_destinationDatabaseScope - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * sourceZoneID;                   //@synthesize sourceZoneID=_sourceZoneID - In the implementation block
@property (assign,nonatomic) long long sourceDatabaseScope;                   //@synthesize sourceDatabaseScope=_sourceDatabaseScope - In the implementation block
@property (nonatomic,readonly) BOOL isCrossOwner; 
-(CKRecordZoneID *)sourceZoneID;
-(void)setSourceZoneID:(CKRecordZoneID *)arg1 ;
-(id)CKPropertiesDescription;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CKRecordZoneID *)destinationZoneID;
-(id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 sourceZoneID:(id)arg3 sourceDatabaseScope:(long long)arg4 ;
-(long long)destinationDatabaseScope;
-(long long)sourceDatabaseScope;
-(id)initWithDestinationZoneID:(id)arg1 destinationDatabaseScope:(long long)arg2 ;
-(BOOL)isCrossOwner;
-(void)setDestinationZoneID:(CKRecordZoneID *)arg1 ;
-(void)setSourceDatabaseScope:(long long)arg1 ;
-(void)setDestinationDatabaseScope:(long long)arg1 ;
@end

