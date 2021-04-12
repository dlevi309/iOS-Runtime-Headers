/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)priority;
-(long long)resultType;
-(long long)resultSubtype;
-(id)initWithPriority:(long long)arg1 resultType:(long long)arg2 resultSubtype:(long long)arg3 ;
@end

