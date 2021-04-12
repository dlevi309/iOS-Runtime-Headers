/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSArray, NSDictionary, NSString;

@interface WBSPhishingConfiguration : NSObject <WBSRemotePlistSnapshot> {

	NSArray* _overrides;
	NSDictionary* _domains;
	NSDictionary* _imageClassifierIdentifiers;
	unsigned long long _imageCropAndScaleOption;
	NSString* _version;
	CGSize _imageInputSize;

}

@property (nonatomic,readonly) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
@property (nonatomic,readonly) CGSize imageInputSize;                                   //@synthesize imageInputSize=_imageInputSize - In the implementation block
@property (nonatomic,readonly) NSString * version;                                      //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(NSString *)version;
-(BOOL)_parseOverrides:(id)arg1 error:(id*)arg2 ;
-(BOOL)_parseDomains:(id)arg1 error:(id*)arg2 ;
-(BOOL)_parseImageClassifierIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_sanitizeURL:(id)arg1 ;
-(unsigned long long)classifyURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)classifyURL:(id)arg1 imageClassifierIdentifier:(id)arg2 imageClassifierConfidence:(float)arg3 error:(id*)arg4 ;
-(CGSize)imageInputSize;
@end

