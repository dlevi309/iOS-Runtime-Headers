/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(long long)level;
-(NSString *)title;
-(double)modificationTimestamp;
-(long long)databaseID;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5 ;
@end

