/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class CPLScopedIdentifier, CPLRecordChange;

@interface CPLRecordView : NSObject

@property (nonatomic,readonly) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,readonly) CPLRecordChange * synthesizedRecord; 
-(CPLScopedIdentifier *)scopedIdentifier;
-(BOOL)supportsResources;
-(id)description;
-(Class)recordClass;
-(id)relation;
-(id)redactedDescription;
-(CPLRecordChange *)synthesizedRecord;
-(id)relatedScopedIdentifier;
-(id)secondaryScopedIdentifier;
-(id)changeForType:(unsigned long long)arg1 ;
@end

