/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)validatedURL;
-(id)initWithResource:(id)arg1 validatedURL:(id)arg2 validatedData:(id)arg3 ;
-(NSData *)validatedData;
@end

