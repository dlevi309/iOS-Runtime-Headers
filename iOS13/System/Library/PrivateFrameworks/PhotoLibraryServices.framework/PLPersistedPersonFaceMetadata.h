/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PLFaceRebuildDescription.h>

@class NSString;

@interface PLPersistedPersonFaceMetadata : NSObject <NSSecureCoding, PLFaceRebuildDescription> {

	BOOL _isHidden;
	BOOL _manual;
	BOOL _representative;
	BOOL _clusterRejected;
	BOOL _hidden;
	int _nameSource;
	int _cloudNameSource;
	NSString* _assetUUID;
	NSString* _assetCloudGUID;
	double _centerX;
	double _centerY;
	double _size;

}

@property (nonatomic,copy) NSString * assetUUID;                                         //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,copy) NSString * assetCloudGUID;                                    //@synthesize assetCloudGUID=_assetCloudGUID - In the implementation block
@property (assign,nonatomic) double centerX;                                             //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) double centerY;                                             //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) double size;                                                //@synthesize size=_size - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                //@synthesize hidden=_hidden - In the implementation block
@property (assign,getter=isManual,nonatomic) BOOL manual;                                //@synthesize manual=_manual - In the implementation block
@property (assign,getter=isRepresentative,nonatomic) BOOL representative;                //@synthesize representative=_representative - In the implementation block
@property (assign,getter=isClusterRejected,nonatomic) BOOL clusterRejected;              //@synthesize clusterRejected=_clusterRejected - In the implementation block
@property (assign,nonatomic) int nameSource;                                             //@synthesize nameSource=_nameSource - In the implementation block
@property (assign,nonatomic) int cloudNameSource;                                        //@synthesize cloudNameSource=_cloudNameSource - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL isHidden;                            //@synthesize isHidden=_isHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_detectedFacePropertiesToFetch;
+(id)_detectedFaceRelationshipKeyPathsToPrefetch;
+(id)_persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(BOOL)arg2 isClusterRejected:(BOOL)arg3 ;
+(id)_migrateDetectedFaces:(id)arg1 forPersonMetadata:(id)arg2 fromVersion:(unsigned long long)arg3 ;
+(id)_persistedFacesWithUnarchiver:(id)arg1 key:(id)arg2 ;
+(void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(double)size;
-(BOOL)isHidden;
-(BOOL)isHidden;
-(void)setSize:(double)arg1 ;
-(double)centerX;
-(double)centerY;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isManual;
-(NSString *)assetUUID;
-(void)setAssetUUID:(NSString *)arg1 ;
-(int)nameSource;
-(void)setNameSource:(int)arg1 ;
-(void)setCloudNameSource:(int)arg1 ;
-(BOOL)isRepresentative;
-(int)cloudNameSource;
-(BOOL)isClusterRejected;
-(void)setClusterRejected:(BOOL)arg1 ;
-(void)setRepresentative:(BOOL)arg1 ;
-(void)setAssetCloudGUID:(NSString *)arg1 ;
-(void)setManual:(BOOL)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1 personUUID:(id)arg2 isRejected:(BOOL)arg3 ;
-(id)matchingFaceInManagedObejctContext:(id)arg1 ;
-(BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forConfirmedPersonUUID:(id)arg2 diff:(id*)arg3 ;
-(BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forRejectedPersonUUID:(id)arg2 diff:(id*)arg3 ;
-(id)jsonDictionary;
-(NSString *)assetCloudGUID;
@end

