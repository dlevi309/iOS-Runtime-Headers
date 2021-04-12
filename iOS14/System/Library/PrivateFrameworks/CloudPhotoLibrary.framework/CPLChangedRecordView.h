/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordView.h>

@class CPLRecordView, CPLRecordChange;

@interface CPLChangedRecordView : CPLRecordView {

	CPLRecordView* _baseRecordView;
	CPLRecordChange* _change;

}

@property (nonatomic,readonly) CPLRecordView * baseRecordView;              //@synthesize baseRecordView=_baseRecordView - In the implementation block
@property (nonatomic,readonly) CPLRecordChange * change;                    //@synthesize change=_change - In the implementation block
-(CPLRecordChange *)change;
-(id)scopedIdentifier;
-(BOOL)supportsResources;
-(id)description;
-(Class)recordClass;
-(id)redactedDescription;
-(id)synthesizedRecord;
-(id)initWithChange:(id)arg1 overRecordView:(id)arg2 ;
-(id)changeForType:(unsigned long long)arg1 ;
-(CPLRecordView *)baseRecordView;
@end

