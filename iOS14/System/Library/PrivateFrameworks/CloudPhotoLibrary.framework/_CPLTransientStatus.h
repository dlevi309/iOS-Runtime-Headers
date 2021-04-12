/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CPLRecordChange *)record;
-(unsigned long long)generation;
-(NSDate *)date;
-(CPLRecordStatus *)status;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3 ;
@end

