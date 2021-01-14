/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PLResourceIdentity.h>

@protocol PLUniformTypeIdentifierIdentity;
@class PLPhotoLibrary, NSString;

@interface PHImageRequestResource : NSObject <PLResourceIdentity> {

	PLPhotoLibrary* _photoLibrary;
	unsigned _resourceType;
	unsigned _version;
	unsigned _recipeID;
	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;

}

@property (nonatomic,readonly) unsigned resourceType;                                                    //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) unsigned version;                                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned recipeID;                                                        //@synthesize recipeID=_recipeID - In the implementation block
@property (nonatomic,readonly) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;              //@synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dictionaryRepresentationFromResourceIdentity:(id)arg1 ;
+(id)possibleClassesInDictionaryRepresentation;
+(id)imageRequestResourceForDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4 ;
-(unsigned)resourceType;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(unsigned)recipeID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(id)initWithResource:(id)arg1 ;
-(unsigned)version;
-(id)initWithResourceType:(unsigned)arg1 version:(unsigned)arg2 recipeID:(unsigned)arg3 uti:(id)arg4 conformsToTypes:(long long)arg5 ;
@end

