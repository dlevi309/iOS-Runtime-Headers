/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSDate, CPLRecordChange, CPLRecordStatus;

@interface _CPLTransientStatus : NSObject {

	NSDate* _date;
	CPLRecordChange* _record;
	unsigned long long _generation;

}

@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CPLRecordChange * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) CPLRecordStatus * status; 
-(NSDate *)date;
-(CPLRecordStatus *)status;
-(unsigned long long)generation;
-(CPLRecordChange *)record;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3 ;
@end

