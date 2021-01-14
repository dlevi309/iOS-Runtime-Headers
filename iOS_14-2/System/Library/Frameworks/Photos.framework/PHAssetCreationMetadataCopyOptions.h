/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldCopyTitleDescriptionAndKeywords;
	BOOL _shouldCopySpatialOverCaptureResources;

}

@property (assign,nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords;              //@synthesize shouldCopyTitleDescriptionAndKeywords=_shouldCopyTitleDescriptionAndKeywords - In the implementation block
@property (assign,nonatomic) BOOL shouldCopySpatialOverCaptureResources;              //@synthesize shouldCopySpatialOverCaptureResources=_shouldCopySpatialOverCaptureResources - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataCopyOptionsForPublishingOriginals;
-(id)initWithXPCDict:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)plRepresentation;
-(id)description;
-(BOOL)shouldCopyTitleDescriptionAndKeywords;
-(void)setShouldCopyTitleDescriptionAndKeywords:(BOOL)arg1 ;
-(BOOL)shouldCopySpatialOverCaptureResources;
-(void)setShouldCopySpatialOverCaptureResources:(BOOL)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

