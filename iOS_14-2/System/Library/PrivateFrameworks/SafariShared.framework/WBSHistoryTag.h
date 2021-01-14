/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString;

@interface WBSHistoryTag : NSObject {

	long long _databaseID;
	NSString* _title;
	NSString* _identifier;
	double _modificationTimestamp;
	long long _level;

}

@property (nonatomic,readonly) long long databaseID;                      //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double modificationTimestamp;              //@synthesize modificationTimestamp=_modificationTimestamp - In the implementation block
@property (nonatomic,readonly) long long level;                           //@synthesize level=_level - In the implementation block
-(id)init;
-(double)modificationTimestamp;
-(long long)level;
-(unsigned long long)hash;
-(NSString *)identifier;
-(long long)databaseID;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

