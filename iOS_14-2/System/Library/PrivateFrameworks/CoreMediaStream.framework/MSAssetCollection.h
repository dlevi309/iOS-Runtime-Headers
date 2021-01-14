/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MSAsset, NSArray, NSDate, NSData;

@interface MSAssetCollection : NSObject <NSSecureCoding> {

	NSString* _assetCollectionID;
	NSString* _ctag;
	MSAsset* _masterAsset;
	NSArray* _derivedAssets;
	NSString* _fileName;
	BOOL _wasDeleted;
	NSDate* _serverUploadedDate;
	long long _initialFailureDate;

}

@property (nonatomic,retain) NSString * assetCollectionID;                   //@synthesize assetCollectionID=_assetCollectionID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                                //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) MSAsset * masterAsset;                          //@synthesize masterAsset=_masterAsset - In the implementation block
@property (nonatomic,__weak,readonly) NSData * masterAssetHash; 
@property (nonatomic,retain) NSArray * derivedAssets; 
@property (nonatomic,retain) NSString * fileName;                            //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                                //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,retain) NSDate * serverUploadedDate;                    //@synthesize serverUploadedDate=_serverUploadedDate - In the implementation block
@property (assign,nonatomic) long long initialFailureDate;                   //@synthesize initialFailureDate=_initialFailureDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 ;
+(id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3 ;
-(BOOL)wasDeleted;
-(NSString *)ctag;
-(void)setFileName:(NSString *)arg1 ;
-(void)setCtag:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)fileName;
-(void)setAssetCollectionID:(NSString *)arg1 ;
-(id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3 ;
-(id)description;
-(void)setWasDeleted:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)masterAssetHash;
-(NSArray *)derivedAssets;
-(void)setDerivedAssets:(NSArray *)arg1 ;
-(NSString *)assetCollectionID;
-(MSAsset *)masterAsset;
-(void)setMasterAsset:(MSAsset *)arg1 ;
-(NSDate *)serverUploadedDate;
-(void)setServerUploadedDate:(NSDate *)arg1 ;
-(long long)initialFailureDate;
-(void)setInitialFailureDate:(long long)arg1 ;
@end

