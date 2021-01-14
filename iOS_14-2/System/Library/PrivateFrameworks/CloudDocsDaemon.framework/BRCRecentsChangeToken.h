/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)toData;
-(id)description;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(unsigned long long)databaseID;
-(void)setNotifRank:(unsigned long long)arg1 ;
-(unsigned long long)notifRank;
@end

