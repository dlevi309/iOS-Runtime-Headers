/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
-(UIActivity *)activity;
-(long long)group;
-(id)secondarySortValue;
-(id)tertiarySortValue;
@end

