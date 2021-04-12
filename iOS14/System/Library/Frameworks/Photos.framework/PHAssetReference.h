/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObjectReference.h>

@interface PHAssetReference : PHObjectReference {

	BOOL _trashed;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	unsigned long long _sourceType;

}

@property (nonatomic,readonly) long long mediaType;                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtypes;              //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                 //@synthesize sourceType=_sourceType - In the implementation block
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed;                 //@synthesize trashed=_trashed - In the implementation block
+(id)representedType;
+(id)referenceForAsset:(id)arg1 ;
-(unsigned long long)sourceType;
-(long long)mediaType;
-(BOOL)isTrashed;
-(id)initWithDictionary:(id)arg1 referenceType:(id)arg2 ;
-(id)dictionaryForReferenceType:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 mediaType:(long long)arg3 subtypes:(unsigned long long)arg4 sourceType:(unsigned long long)arg5 isTrashed:(BOOL)arg6 ;
-(unsigned long long)mediaSubtypes;
@end

