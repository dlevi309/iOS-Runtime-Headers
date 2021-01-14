/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSString, NSSet;

@interface PLFileSystemVolume : PLManagedObject {

	NSURL* _url;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * volumeUuidString; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,readonly) BOOL isOffline; 
@property (nonatomic,retain) NSSet * resources; 
+(id)entityName;
+(id)volumeForObjectUUID:(id)arg1 context:(id)arg2 ;
+(id)volumeForURL:(id)arg1 context:(id)arg2 ;
+(id)predictedURLForVolumeName:(id)arg1 ;
+(id)volumeForVolumeUUID:(id)arg1 context:(id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)payloadID;
-(BOOL)supportsCloudUpload;
-(void)awakeFromFetch;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)awakeFromInsert;
-(void)willTurnIntoFault;
-(id)payloadIDForTombstone:(id)arg1 ;
-(BOOL)isOffline;
-(NSURL *)url;
-(void)_unregisterWithVolumeManager;
-(void)setUrl:(NSURL *)arg1 ;
-(id)predictedURL;
-(void)didTurnIntoFault;
-(void)_registerWithVolumeManager;
-(void)unregisterWithVolumeManager;
@end

