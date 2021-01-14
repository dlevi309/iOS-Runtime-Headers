/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)from;
-(NSString *)detail;
-(id)description;
-(long long)selectID;
-(long long)order;
-(id)initWithSelectID:(long long)arg1 order:(long long)arg2 from:(long long)arg3 detail:(id)arg4 ;
@end

