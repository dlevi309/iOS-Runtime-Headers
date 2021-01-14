/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataBackwardCompatibility.h>

@class NSString, LPImage;

@interface LPiCloudFamilyInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	NSString* _kind;
	LPImage* _image;
	LPImage* _icon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) LPImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                        //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)populateMetadataForBackwardCompatibility:(id)arg1 ;
-(LPImage *)icon;
-(NSString *)subtitle;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(LPImage *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(LPImage *)image;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

