/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFCloudKitImporterOptions, NSCloudKitMirroringImportRequest;

@interface PFCloudKitImporterWorkItem : NSObject {

	PFCloudKitImporterOptions* _options;
	NSCloudKitMirroringImportRequest* _request;

}

@property (nonatomic,readonly) PFCloudKitImporterOptions * options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * request;              //@synthesize request=_request - In the implementation block
-(void)dealloc;
-(PFCloudKitImporterOptions *)options;
-(NSCloudKitMirroringImportRequest *)request;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
@end

