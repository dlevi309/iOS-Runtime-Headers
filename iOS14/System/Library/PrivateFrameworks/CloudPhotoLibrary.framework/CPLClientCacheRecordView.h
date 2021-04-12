/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordView.h>

@protocol CPLEngineIDMapping;
@class CPLScopedIdentifier, CPLRecordChange;

@interface CPLClientCacheRecordView : CPLRecordView {

	CPLScopedIdentifier* _localScopedIdentifier;
	CPLRecordChange* _cloudRecord;
	id<CPLEngineIDMapping> _idMapping;

}

@property (nonatomic,readonly) CPLScopedIdentifier * localScopedIdentifier; 
@property (nonatomic,readonly) CPLRecordChange * cloudRecord;                            //@synthesize cloudRecord=_cloudRecord - In the implementation block
@property (nonatomic,readonly) id<CPLEngineIDMapping> idMapping;                         //@synthesize idMapping=_idMapping - In the implementation block
-(id)scopedIdentifier;
-(BOOL)supportsResources;
-(id)description;
-(Class)recordClass;
-(id)relation;
-(id)redactedDescription;
-(id)synthesizedRecord;
-(id<CPLEngineIDMapping>)idMapping;
-(id)relatedScopedIdentifier;
-(id)secondaryScopedIdentifier;
-(id)initWithLocalScopedIdentifier:(id)arg1 cloudRecord:(id)arg2 idMapping:(id)arg3 ;
-(CPLScopedIdentifier *)localScopedIdentifier;
-(CPLRecordChange *)cloudRecord;
@end

