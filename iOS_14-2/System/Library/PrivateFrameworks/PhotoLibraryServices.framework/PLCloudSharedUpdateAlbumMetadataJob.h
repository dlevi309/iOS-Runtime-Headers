/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob {

	NSDictionary* _metadata;

}

@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(void)updateAlbumMetadata:(id)arg1 ;
-(void)run;
-(void)runDaemonSide;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)description;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(id)_argumentsDictionaryAsData:(id)arg1 ;
-(id)_argumentsDictionaryFromXPCEvent:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(NSDictionary *)metadata;
-(long long)daemonOperation;
@end

