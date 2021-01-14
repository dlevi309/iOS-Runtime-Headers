/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPSpecializationMetadata.h>
#import <libobjc.A.dylib/LPLinkMetadataPresentationTransformer.h>

@class NSAttributedString, NSString;

@interface LPSharingStatusMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer> {

	NSAttributedString* _status;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSAttributedString * status;              //@synthesize status=_status - In the implementation block
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(id)presentationPropertiesForTransformer:(id)arg1 ;
-(BOOL)canGeneratePresentationPropertiesForURL:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStatus:(NSAttributedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSAttributedString *)status;
@end

