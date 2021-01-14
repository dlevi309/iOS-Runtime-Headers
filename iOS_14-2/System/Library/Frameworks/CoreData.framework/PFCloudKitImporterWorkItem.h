/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFCloudKitImporterOptions, NSCloudKitMirroringImportRequest;

@interface PFCloudKitImporterWorkItem : NSObject {

	PFCloudKitImporterOptions* _options;
	NSCloudKitMirroringImportRequest* _request;

}

@property (nonatomic,readonly) PFCloudKitImporterOptions * options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * request;              //@synthesize request=_request - In the implementation block
-(PFCloudKitImporterOptions *)options;
-(NSCloudKitMirroringImportRequest *)request;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

