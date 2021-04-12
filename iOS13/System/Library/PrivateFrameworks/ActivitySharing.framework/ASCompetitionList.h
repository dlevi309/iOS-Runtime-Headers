/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <libobjc.A.dylib/ASCloudKitCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSUUID, CKRecord, ASCodableCloudKitCompetitionList, NSString, ASCompetition;

@interface ASCompetitionList : NSObject <ASCloudKitCodable, NSCopying> {

	NSArray* _competitions;
	long long _type;
	NSUUID* _friendUUID;
	CKRecord* _systemFieldsOnlyRecord;

}

@property (nonatomic,readonly) ASCodableCloudKitCompetitionList * codableCompetitionList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * competitions;                                                   //@synthesize competitions=_competitions - In the implementation block
@property (assign,nonatomic) long long type;                                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSUUID * friendUUID;                                                      //@synthesize friendUUID=_friendUUID - In the implementation block
@property (nonatomic,copy) CKRecord * systemFieldsOnlyRecord;                                          //@synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord - In the implementation block
@property (nonatomic,readonly) ASCompetition * currentCompetition; 
+(id)competitionListWithCodableCompetitionList:(id)arg1 ;
+(id)competitionListWithRecord:(id)arg1 ;
+(id)competitionListFromCodableDatabaseCompetitionList:(id)arg1 codableCompetitions:(id)arg2 withType:(long long)arg3 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSUUID *)friendUUID;
-(void)setFriendUUID:(NSUUID *)arg1 ;
-(id)recordWithZoneID:(id)arg1 ;
-(CKRecord *)systemFieldsOnlyRecord;
-(void)setSystemFieldsOnlyRecord:(CKRecord *)arg1 ;
-(ASCodableCloudKitCompetitionList *)codableCompetitionList;
-(NSArray *)competitions;
-(void)setCompetitions:(NSArray *)arg1 ;
-(ASCompetition *)currentCompetition;
-(id)codableDatabaseCompetitionListEntryForOwner:(long long)arg1 ;
-(id)initWithFriendUUID:(id)arg1 type:(long long)arg2 ;
@end

