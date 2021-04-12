/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {

	/*^block*/id _uploadAllFilesCompletion;
	BRContainer* _container;

}

@property (copy) id uploadAllFilesCompletion;              //@synthesize uploadAllFilesCompletion=_uploadAllFilesCompletion - In the implementation block
-(id)init;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithContainer:(id)arg1 ;
-(id)uploadAllFilesCompletion;
-(void)setUploadAllFilesCompletion:(id)arg1 ;
@end

