/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>
#import <libobjc.A.dylib/LPLinkMetadataPreviewTransformer.h>

@class NSString;

@interface LPAppleNewsMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer> {

	NSString* _source;
	NSString* _title;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(id)previewSummaryForTransformer:(id)arg1 ;
-(id)previewImageForTransformer:(id)arg1 ;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
@end

