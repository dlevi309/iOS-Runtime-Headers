/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class CPLDiffTracker, NSArray;

@interface CPLRecordChangeDiffTracker : NSObject {

	CPLDiffTracker* _diffTracker;
	unsigned long long _trackingChangeType;

}

@property (nonatomic,readonly) NSArray * updatedProperties; 
-(id)init;
-(id)description;
-(NSArray *)updatedProperties;
-(id)redactedDescription;
-(void)withTrackerForChangeType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithTrackingChangeTypeMask:(unsigned long long)arg1 ;
-(BOOL)areObjectsDifferentOnProperty:(id)arg1 changeType:(unsigned long long)arg2 ;
@end

