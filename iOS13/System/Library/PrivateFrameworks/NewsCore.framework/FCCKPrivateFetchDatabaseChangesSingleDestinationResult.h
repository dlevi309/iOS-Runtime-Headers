/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, CKServerChangeToken, NSError;

@interface FCCKPrivateFetchDatabaseChangesSingleDestinationResult : NSObject {

	BOOL _moreComing;
	long long _destination;
	NSArray* _changedZoneIDs;
	NSArray* _deletedZoneIDs;
	CKServerChangeToken* _serverChangeToken;
	NSError* _error;

}

@property (assign,nonatomic) long long destination;                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSArray * changedZoneIDs;                             //@synthesize changedZoneIDs=_changedZoneIDs - In the implementation block
@property (nonatomic,retain) NSArray * deletedZoneIDs;                             //@synthesize deletedZoneIDs=_deletedZoneIDs - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                      //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,retain) NSError * error;                                      //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)destination;
-(void)setDestination:(long long)arg1 ;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setChangedZoneIDs:(NSArray *)arg1 ;
-(void)setDeletedZoneIDs:(NSArray *)arg1 ;
-(NSArray *)changedZoneIDs;
-(NSArray *)deletedZoneIDs;
@end

