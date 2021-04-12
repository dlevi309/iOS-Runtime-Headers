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

@class NSString, LPImage, NSArray;

@interface LPMapCollectionMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	unsigned _numberOfItems;
	NSString* _name;
	LPImage* _icon;
	LPImage* _image;
	LPImage* _darkImage;
	NSArray* _addresses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned numberOfItems;                //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,retain) LPImage * icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) LPImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * darkImage;                   //@synthesize darkImage=_darkImage - In the implementation block
@property (nonatomic,copy) NSArray * addresses;                     //@synthesize addresses=_addresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(LPImage *)image;
-(void)setImage:(LPImage *)arg1 ;
-(NSArray *)addresses;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(unsigned)numberOfItems;
-(id)_bottomLine;
-(void)setAddresses:(NSArray *)arg1 ;
-(void)setNumberOfItems:(unsigned)arg1 ;
-(void)setDarkImage:(LPImage *)arg1 ;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(LPImage *)darkImage;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(id)_resolvedImage;
@end

