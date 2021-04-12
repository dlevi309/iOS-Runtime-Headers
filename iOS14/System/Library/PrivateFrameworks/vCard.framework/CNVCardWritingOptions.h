/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


#import <vCard/vCard-Structs.h>
@class NSArray;

@interface CNVCardWritingOptions : NSObject {

	BOOL _includeNotes;
	BOOL _includePhotos;
	BOOL _includePrivateFields;
	BOOL _includePrivateBundleIdentifiers;
	BOOL _includeUserSettings;
	BOOL _compressPhotos;
	BOOL _prefersUncroppedPhotos;
	BOOL _usePhotoReferencesIfAvailable;
	unsigned long long _maximumEncodingLength;
	unsigned long long _maximumImageEncodingLength;
	CGSize _maximumImageSize;
	NSArray* _treatAsUnknownProperties;
	unsigned long long _outputVersion;
	NSArray* _availableEncodings;

}

@property (assign) BOOL includePrivateFields;                                  //@synthesize includePrivateFields=_includePrivateFields - In the implementation block
@property (assign) BOOL includePrivateBundleIdentifiers;                       //@synthesize includePrivateBundleIdentifiers=_includePrivateBundleIdentifiers - In the implementation block
@property (assign) BOOL includeNotes;                                          //@synthesize includeNotes=_includeNotes - In the implementation block
@property (assign) BOOL includeUserSettings;                                   //@synthesize includeUserSettings=_includeUserSettings - In the implementation block
@property (assign) BOOL includePhotos;                                         //@synthesize includePhotos=_includePhotos - In the implementation block
@property (assign) BOOL compressPhotos;                                        //@synthesize compressPhotos=_compressPhotos - In the implementation block
@property (assign) BOOL prefersUncroppedPhotos;                                //@synthesize prefersUncroppedPhotos=_prefersUncroppedPhotos - In the implementation block
@property (assign) BOOL usePhotoReferencesIfAvailable;                         //@synthesize usePhotoReferencesIfAvailable=_usePhotoReferencesIfAvailable - In the implementation block
@property (assign) CGSize maximumImageSize;                                    //@synthesize maximumImageSize=_maximumImageSize - In the implementation block
@property (assign) unsigned long long maximumEncodingLength;                   //@synthesize maximumEncodingLength=_maximumEncodingLength - In the implementation block
@property (assign) unsigned long long maximumImageEncodingLength;              //@synthesize maximumImageEncodingLength=_maximumImageEncodingLength - In the implementation block
@property (copy) NSArray * treatAsUnknownProperties;                           //@synthesize treatAsUnknownProperties=_treatAsUnknownProperties - In the implementation block
@property (assign) unsigned long long outputVersion;                           //@synthesize outputVersion=_outputVersion - In the implementation block
@property (copy) NSArray * availableEncodings;                                 //@synthesize availableEncodings=_availableEncodings - In the implementation block
+(id)optionsFromPreferences;
-(id)init;
-(BOOL)compressPhotos;
-(BOOL)prefersUncroppedPhotos;
-(void)setIncludePhotos:(BOOL)arg1 ;
-(void)setOutputVersion:(unsigned long long)arg1 ;
-(BOOL)includePhotos;
-(void)setAvailableEncodings:(NSArray *)arg1 ;
-(BOOL)includeNotes;
-(void)setCompressPhotos:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)maximumImageEncodingLength;
-(BOOL)includePrivateFields;
-(NSArray *)treatAsUnknownProperties;
-(void)setMaximumImageSize:(CGSize)arg1 ;
-(void)setUsePhotoReferencesIfAvailable:(BOOL)arg1 ;
-(void)setMaximumEncodingLength:(unsigned long long)arg1 ;
-(NSArray *)availableEncodings;
-(unsigned long long)maximumEncodingLength;
-(void)setTreatAsUnknownProperties:(NSArray *)arg1 ;
-(BOOL)usePhotoReferencesIfAvailable;
-(void)setMaximumImageEncodingLength:(unsigned long long)arg1 ;
-(void)setIncludeUserSettings:(BOOL)arg1 ;
-(BOOL)includeUserSettings;
-(void)setIncludePrivateBundleIdentifiers:(BOOL)arg1 ;
-(BOOL)includePrivateBundleIdentifiers;
-(unsigned long long)outputVersion;
-(void)setIncludeNotes:(BOOL)arg1 ;
-(void)setIncludePrivateFields:(BOOL)arg1 ;
-(void)setPrefersUncroppedPhotos:(BOOL)arg1 ;
-(CGSize)maximumImageSize;
@end

