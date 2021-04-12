/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSString, NSNumber;

@interface PHCloudSharedAlbum : PHAssetCollection {

	BOOL _owned;
	BOOL _cloudMultipleContributorsEnabled;
	short _cloudAlbumSubtype;
	NSString* _cloudOwnerFirstName;
	NSString* _cloudOwnerLastName;
	NSString* _cloudOwnerFullName;
	NSNumber* _cloudOwnerEmailKey;

}

@property (getter=isOwned,nonatomic,readonly) BOOL owned;                                                                    //@synthesize owned=_owned - In the implementation block
@property (getter=isCloudMultipleContributorsEnabled,nonatomic,readonly) BOOL cloudMultipleContributorsEnabled;              //@synthesize cloudMultipleContributorsEnabled=_cloudMultipleContributorsEnabled - In the implementation block
@property (nonatomic,readonly) short cloudAlbumSubtype;                                                                      //@synthesize cloudAlbumSubtype=_cloudAlbumSubtype - In the implementation block
@property (nonatomic,retain,readonly) NSString * cloudOwnerFirstName;                                                        //@synthesize cloudOwnerFirstName=_cloudOwnerFirstName - In the implementation block
@property (nonatomic,retain,readonly) NSString * cloudOwnerLastName;                                                         //@synthesize cloudOwnerLastName=_cloudOwnerLastName - In the implementation block
@property (nonatomic,retain,readonly) NSString * cloudOwnerFullName;                                                         //@synthesize cloudOwnerFullName=_cloudOwnerFullName - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * cloudOwnerEmailKey;                                                         //@synthesize cloudOwnerEmailKey=_cloudOwnerEmailKey - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
-(id)description;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1 ;
-(NSString *)cloudOwnerFirstName;
-(NSString *)cloudOwnerLastName;
-(NSString *)cloudOwnerFullName;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isOwned;
-(NSNumber *)cloudOwnerEmailKey;
-(short)cloudAlbumSubtype;
-(BOOL)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(BOOL)isCloudMultipleContributorsEnabled;
@end

