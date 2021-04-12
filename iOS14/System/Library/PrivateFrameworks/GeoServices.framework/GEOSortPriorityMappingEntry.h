/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOSortPriorityMappingEntry : NSObject {

	long long _priority;
	long long _resultType;
	long long _resultSubtype;

}

@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long resultType;                 //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) long long resultSubtype;              //@synthesize resultSubtype=_resultSubtype - In the implementation block
-(id)init;
-(long long)resultType;
-(long long)resultSubtype;
-(id)initWithPriority:(long long)arg1 resultType:(long long)arg2 resultSubtype:(long long)arg3 ;
-(long long)priority;
@end

