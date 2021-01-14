/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSManagedObjectID, NSString;

@interface PLLocalVideoKeyFrameGenerationJob : NSObject {

	BOOL _networkAccessAllowed;
	NSManagedObjectID* _assetObjectID;
	NSString* _libraryID;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSManagedObjectID * assetObjectID;              //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (assign,nonatomic) BOOL networkAccessAllowed;                      //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) NSString * libraryID;                             //@synthesize libraryID=_libraryID - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setAssetObjectID:(NSManagedObjectID *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSManagedObjectID *)assetObjectID;
-(NSString *)libraryID;
-(BOOL)isEqualToJob:(id)arg1 ;
-(BOOL)networkAccessAllowed;
-(id)completionHandler;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setLibraryID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

