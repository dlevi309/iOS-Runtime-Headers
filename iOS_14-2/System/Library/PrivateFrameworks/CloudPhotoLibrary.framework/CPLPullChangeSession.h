/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLChangeSession.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSString;

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject> {

	double _sentBatchTimeInterval;

}

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(void)getChangeBatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

