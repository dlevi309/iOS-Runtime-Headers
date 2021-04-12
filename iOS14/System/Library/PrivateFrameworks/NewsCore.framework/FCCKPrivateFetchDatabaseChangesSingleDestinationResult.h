/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)moreComing;
-(void)setDestination:(long long)arg1 ;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setMoreComing:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSArray *)changedZoneIDs;
-(void)setChangedZoneIDs:(NSArray *)arg1 ;
-(void)setDeletedZoneIDs:(NSArray *)arg1 ;
-(NSArray *)deletedZoneIDs;
-(CKServerChangeToken *)serverChangeToken;
-(long long)destination;
@end

