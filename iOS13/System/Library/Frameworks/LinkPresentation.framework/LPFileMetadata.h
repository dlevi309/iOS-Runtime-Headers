/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>
#import <libobjc.A.dylib/LPMultipleMetadataPresentationTransformer.h>

@class NSString, LPImage, NSDate;

@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer> {

	NSString* _name;
	NSString* _type;
	unsigned long long _size;
	LPImage* _thumbnail;
	LPImage* _icon;
	NSDate* _creationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) LPImage * thumbnail;                   //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) LPImage * icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)size;
-(NSDate *)creationDate;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(LPImage *)thumbnail;
-(void)setThumbnail:(LPImage *)arg1 ;
-(BOOL)_isImage;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(long long)summaryTypeForTransformer:(id)arg1 ;
-(id)_fileTypeStringForTransformer:(id)arg1 ;
-(id)_fileDetailStringForTransformer:(id)arg1 ;
-(id)_nameForTransformer:(id)arg1 ;
-(id)_bottomCaptionStringForTransformer:(id)arg1 ;
-(BOOL)_shouldUseSquareIcon;
-(BOOL)_shouldUseCircularIcon;
-(id)_singleLineDescriptionForRemoteFileWithTransformer:(id)arg1 ;
-(BOOL)_isPlainText;
@end

