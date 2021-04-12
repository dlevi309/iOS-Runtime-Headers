/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
+(id)volumeForURL:(id)arg1 context:(id)arg2 ;
+(id)volumeForVolumeUUID:(id)arg1 context:(id)arg2 ;
+(id)volumeForObjectUUID:(id)arg1 context:(id)arg2 ;
+(id)predictedURLForVolumeName:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)didTurnIntoFault;
-(void)awakeFromInsert;
-(BOOL)isOffline;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)unregisterWithVolumeManager;
-(void)_registerWithVolumeManager;
-(void)_unregisterWithVolumeManager;
-(id)predictedURL;
@end

