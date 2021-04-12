/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class MLModelAsset, MLModel;

@interface SSCoreMLInterface : NSObject {

	MLModelAsset* asset;
	MLModel* model;

}
-(id)getVersionString;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initSpecificModel:(id)arg1 error:(id*)arg2 ;
-(float)predict:(id)arg1 error:(id*)arg2 ;
-(id)getDescription;
@end

