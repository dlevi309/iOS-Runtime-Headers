/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class UIActivity;

@interface _UIActivitySortItem : NSObject {

	UIActivity* _activity;
	long long _group;
	id _secondarySortValue;
	id _tertiarySortValue;

}

@property (nonatomic,readonly) UIActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) long long group;                    //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) id secondarySortValue;              //@synthesize secondarySortValue=_secondarySortValue - In the implementation block
@property (nonatomic,readonly) id tertiarySortValue;               //@synthesize tertiarySortValue=_tertiarySortValue - In the implementation block
+(id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 ;
+(id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 tertiarySortValue:(id)arg4 ;
-(long long)group;
-(long long)compare:(id)arg1 ;
-(UIActivity *)activity;
-(id)debugDescription;
-(id)secondarySortValue;
-(id)tertiarySortValue;
@end

