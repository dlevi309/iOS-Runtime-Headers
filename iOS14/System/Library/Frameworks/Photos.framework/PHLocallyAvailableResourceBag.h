/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHRecyclableObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;
@class NSString;

@interface PHLocallyAvailableResourceBag : NSObject <PHRecyclableObject, NSCopying> {

	BOOL _keyIsHintBased;
	BOOL _isDegraded;
	BOOL _isPrimaryFormat;
	BOOL _isDefaultOrientation;
	id<PLAssetID> _assetID;
	id<PLResourceDataStore> _dataStore;
	id<PLResourceDataStoreKey> _dataStoreKey;

}

@property (nonatomic,retain) id<PLAssetID> assetID;                                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStore> dataStore;                    //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) id<PLResourceDataStoreKey> dataStoreKey;              //@synthesize dataStoreKey=_dataStoreKey - In the implementation block
@property (assign,nonatomic) BOOL keyIsHintBased;                                  //@synthesize keyIsHintBased=_keyIsHintBased - In the implementation block
@property (assign,nonatomic) BOOL isDegraded;                                      //@synthesize isDegraded=_isDegraded - In the implementation block
@property (assign,nonatomic) BOOL isPrimaryFormat;                                 //@synthesize isPrimaryFormat=_isPrimaryFormat - In the implementation block
@property (assign,nonatomic) BOOL isDefaultOrientation;                            //@synthesize isDefaultOrientation=_isDefaultOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PLResourceDataStore>)dataStore;
-(id)resourceData;
-(BOOL)isPrimaryFormat;
-(void)setDataStoreKey:(id<PLResourceDataStoreKey>)arg1 ;
-(BOOL)isDefaultOrientation;
-(id<PLAssetID>)assetID;
-(void)setDataStore:(id<PLResourceDataStore>)arg1 ;
-(void)prepareForReuse;
-(void)setIsPrimaryFormat:(BOOL)arg1 ;
-(BOOL)keyIsHintBased;
-(NSString *)description;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(BOOL)isDegraded;
-(void)setKeyIsHintBased:(BOOL)arg1 ;
-(void)setIsDefaultOrientation:(BOOL)arg1 ;
-(id)resourceURL;
-(void)setIsDegraded:(BOOL)arg1 ;
-(void)setAssetID:(id<PLAssetID>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

