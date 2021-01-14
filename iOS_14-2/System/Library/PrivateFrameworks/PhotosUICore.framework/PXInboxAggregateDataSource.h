/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXInboxModelDataSource.h>

@class NSDictionary;

@interface PXInboxAggregateDataSource : PXInboxModelDataSource {

	NSDictionary* _providerSourceDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * providerSourceDictionary;              //@synthesize providerSourceDictionary=_providerSourceDictionary - In the implementation block
-(id)initWithModels:(id)arg1 providerSourceDictionary:(id)arg2 ;
-(id)providerSourceForModel:(id)arg1 ;
-(NSDictionary *)providerSourceDictionary;
@end

