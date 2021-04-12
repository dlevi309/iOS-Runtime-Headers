/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class MLModelAsset, MLModel;

@interface SSCoreMLInterface : NSObject {

	MLModelAsset* asset;
	MLModel* model;

}
-(id)getDescription;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)getVersionString;
-(id)initSpecificModel:(id)arg1 error:(id*)arg2 ;
-(float)predict:(id)arg1 error:(id*)arg2 ;
@end

