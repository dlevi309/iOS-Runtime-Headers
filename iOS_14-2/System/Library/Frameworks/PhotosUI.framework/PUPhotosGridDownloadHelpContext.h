/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PHResourceLocalAvailabilityRequest, NSString;

@interface PUPhotosGridDownloadHelpContext : NSObject {

	PHResourceLocalAvailabilityRequest* _resourceLocalAvailabilityRequest;
	NSString* _gridProgressIdentifier;
	/*^block*/id _downloadHandler;

}

@property (nonatomic,retain) PHResourceLocalAvailabilityRequest * resourceLocalAvailabilityRequest;              //@synthesize resourceLocalAvailabilityRequest=_resourceLocalAvailabilityRequest - In the implementation block
@property (nonatomic,retain) NSString * gridProgressIdentifier;                                                  //@synthesize gridProgressIdentifier=_gridProgressIdentifier - In the implementation block
@property (nonatomic,copy) id downloadHandler;                                                                   //@synthesize downloadHandler=_downloadHandler - In the implementation block
-(void)setDownloadHandler:(id)arg1 ;
-(id)downloadHandler;
-(PHResourceLocalAvailabilityRequest *)resourceLocalAvailabilityRequest;
-(void)setResourceLocalAvailabilityRequest:(PHResourceLocalAvailabilityRequest *)arg1 ;
-(NSString *)gridProgressIdentifier;
-(void)setGridProgressIdentifier:(NSString *)arg1 ;
@end

