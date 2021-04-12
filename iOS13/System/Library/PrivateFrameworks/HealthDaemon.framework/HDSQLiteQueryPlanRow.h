/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString;

@interface HDSQLiteQueryPlanRow : NSObject {

	long long _selectID;
	long long _order;
	long long _from;
	NSString* _detail;

}

@property (nonatomic,readonly) long long selectID;                  //@synthesize selectID=_selectID - In the implementation block
@property (nonatomic,readonly) long long order;                     //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) long long from;                      //@synthesize from=_from - In the implementation block
@property (nonatomic,copy,readonly) NSString * detail;              //@synthesize detail=_detail - In the implementation block
-(id)description;
-(long long)order;
-(long long)from;
-(NSString *)detail;
-(id)initWithSelectID:(long long)arg1 order:(long long)arg2 from:(long long)arg3 detail:(id)arg4 ;
-(long long)selectID;
@end

