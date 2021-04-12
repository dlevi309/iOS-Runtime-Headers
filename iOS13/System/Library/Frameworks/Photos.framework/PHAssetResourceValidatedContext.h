/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PHExternalAssetResource, NSURL, NSData;

@interface PHAssetResourceValidatedContext : NSObject {

	PHExternalAssetResource* _resource;
	NSURL* _validatedURL;
	NSData* _validatedData;

}

@property (nonatomic,readonly) PHExternalAssetResource * resource;              //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSURL * validatedURL;                            //@synthesize validatedURL=_validatedURL - In the implementation block
@property (nonatomic,readonly) NSData * validatedData;                          //@synthesize validatedData=_validatedData - In the implementation block
-(PHExternalAssetResource *)resource;
-(id)initWithResource:(id)arg1 validatedURL:(id)arg2 validatedData:(id)arg3 ;
-(NSURL *)validatedURL;
-(NSData *)validatedData;
@end

