/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@interface BRCRecentsChangeToken : NSObject {

	unsigned long long _notifRank;
	unsigned long long _databaseID;

}

@property (assign,nonatomic) unsigned long long notifRank;               //@synthesize notifRank=_notifRank - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)changeTokenFromData:(id)arg1 ;
-(id)description;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)setNotifRank:(unsigned long long)arg1 ;
-(id)toData;
-(unsigned long long)notifRank;
@end

