/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLResourceIdentity, CPLScopedIdentifier, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _backgroundDownloadTaskIdentifier;
	BOOL _canGenerateDerivative;
	CPLResourceIdentity* _identity;
	CPLScopedIdentifier* _itemScopedIdentifier;
	unsigned long long _resourceType;
	unsigned long long _sourceResourceType;

}

@property (nonatomic,retain) CPLResourceIdentity * identity;                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) CPLScopedIdentifier * itemScopedIdentifier;              //@synthesize itemScopedIdentifier=_itemScopedIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long resourceType;                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceResourceType;                 //@synthesize sourceResourceType=_sourceResourceType - In the implementation block
@property (assign,nonatomic) BOOL canGenerateDerivative;                            //@synthesize canGenerateDerivative=_canGenerateDerivative - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier; 
+(id)imageDerivativeTypes;
+(id)videoDerivativeTypes;
+(BOOL)supportsSecureCoding;
+(BOOL)resourceTypeTrackedForUpload:(unsigned long long)arg1 ;
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
+(id)shortDescriptionForResourceType:(unsigned long long)arg1 ;
+(BOOL)cplShouldGenerateDerivatives;
+(unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1 ;
+(float)derivativeGenerationThreshold;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id*)arg2 ;
+(unsigned long long)resourceTypeFromShortDecription:(id)arg1 ;
+(BOOL)shouldIgnoreResourceTypeOnUpload:(unsigned long long)arg1 ;
+(BOOL)hasPriorityBoostForResourceType:(unsigned long long)arg1 ;
+(BOOL)resourceTypeSupportsResourceExpunge:(unsigned long long)arg1 ;
+(void)enumerateResourceTypesWithBlock:(/*^block*/id)arg1 ;
+(unsigned long long)countOfResourceTypes;
-(BOOL)deleteAfterUpload;
-(void)setDeleteAfterUpload:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(CPLResourceIdentity *)identity;
-(void)setIdentity:(CPLResourceIdentity *)arg1 ;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(void)setCanGenerateDerivative:(BOOL)arg1 ;
-(CPLScopedIdentifier *)itemScopedIdentifier;
-(id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 ;
-(void)setSourceResourceType:(unsigned long long)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(unsigned long long)_backgroundDownloadTaskIdentifier;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 ;
-(void)setItemScopedIdentifier:(CPLScopedIdentifier *)arg1 ;
-(id)bestFileNameForResource;
-(BOOL)isTrackedForUpload;
-(unsigned long long)estimatedResourceSize;
-(void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)sourceResourceType;
-(BOOL)canGenerateDerivative;
@end

