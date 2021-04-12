/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLResourceIdentity.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PLCodecIdentity, PLUniformTypeIdentifierIdentity;
@class NSNumber, NSURL, NSDate, NSString;

@interface PLValidatedExternalResource : NSObject <PLResourceIdentity, NSCopying> {

	short _trashedState;
	unsigned _version;
	unsigned _resourceType;
	unsigned _recipeID;
	unsigned _orientation;
	int _qualitySortValue;
	long long _unorientedWidth;
	long long _unorientedHeight;
	id<PLCodecIdentity> _codecID;
	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
	long long _dataLength;
	NSNumber* _sidecarIndex;
	NSURL* _fileURL;
	NSDate* _trashedDate;
	long long _ptpTrashedState;

}

@property (assign,nonatomic) unsigned resourceType;                                                    //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned version;                                                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned recipeID;                                                        //@synthesize recipeID=_recipeID - In the implementation block
@property (nonatomic,retain) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;              //@synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) long long dataLength;                                                     //@synthesize dataLength=_dataLength - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                                     //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long unorientedWidth;                                                //@synthesize unorientedWidth=_unorientedWidth - In the implementation block
@property (assign,nonatomic) long long unorientedHeight;                                               //@synthesize unorientedHeight=_unorientedHeight - In the implementation block
@property (nonatomic,retain) id<PLCodecIdentity> codecID;                                              //@synthesize codecID=_codecID - In the implementation block
@property (assign,nonatomic) int qualitySortValue;                                                     //@synthesize qualitySortValue=_qualitySortValue - In the implementation block
@property (assign,nonatomic) short trashedState;                                                       //@synthesize trashedState=_trashedState - In the implementation block
@property (nonatomic,retain) NSDate * trashedDate;                                                     //@synthesize trashedDate=_trashedDate - In the implementation block
@property (assign,nonatomic) long long ptpTrashedState;                                                //@synthesize ptpTrashedState=_ptpTrashedState - In the implementation block
@property (nonatomic,retain) NSNumber * sidecarIndex;                                                  //@synthesize sidecarIndex=_sidecarIndex - In the implementation block
@property (nonatomic,readonly) BOOL isDerivative; 
@property (nonatomic,readonly) BOOL hasRecipe; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)orientation;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setOrientation:(unsigned)arg1 ;
-(unsigned)resourceType;
-(void)setResourceType:(unsigned)arg1 ;
-(long long)dataLength;
-(short)trashedState;
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1 ;
-(BOOL)isDerivative;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(void)setTrashedDate:(NSDate *)arg1 ;
-(NSDate *)trashedDate;
-(void)setTrashedState:(short)arg1 ;
-(void)setDataLength:(long long)arg1 ;
-(void)setSidecarIndex:(NSNumber *)arg1 ;
-(NSNumber *)sidecarIndex;
-(void)setUnorientedHeight:(long long)arg1 ;
-(void)setUnorientedWidth:(long long)arg1 ;
-(void)setQualitySortValue:(int)arg1 ;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(void)setUniformTypeIdentifierID:(id<PLUniformTypeIdentifierIdentity>)arg1 ;
-(unsigned long long)cplTypeWithAssetID:(id)arg1 ;
-(void)setCodecID:(id<PLCodecIdentity>)arg1 ;
-(void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2 isNativeColorSpace:(BOOL)arg3 isLosslessEncoding:(BOOL)arg4 isCuratedPreview:(BOOL)arg5 ;
-(BOOL)hasRecipe;
-(BOOL)isDefaultOrientation;
-(BOOL)isPlayableVideo;
-(long long)ptpTrashedState;
-(BOOL)isEqualToValidatedExternalResource:(id)arg1 ;
-(void)setPtpTrashedState:(long long)arg1 ;
-(void)setTrashedStateFromURL;
@end

