/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {

	/*^block*/id _uploadAllFilesCompletion;
	BRContainer* _container;

}

@property (copy) id uploadAllFilesCompletion;              //@synthesize uploadAllFilesCompletion=_uploadAllFilesCompletion - In the implementation block
-(id)initWithContainer:(id)arg1 ;
-(id)init;
-(id)uploadAllFilesCompletion;
-(void)setUploadAllFilesCompletion:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

