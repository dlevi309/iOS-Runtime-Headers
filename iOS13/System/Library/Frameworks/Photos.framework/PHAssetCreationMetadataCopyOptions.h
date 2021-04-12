/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying> {

	BOOL _shouldCopyTitleDescriptionAndKeywords;
	BOOL _shouldCopySpatialOverCaptureResources;

}

@property (assign,nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords;              //@synthesize shouldCopyTitleDescriptionAndKeywords=_shouldCopyTitleDescriptionAndKeywords - In the implementation block
@property (assign,nonatomic) BOOL shouldCopySpatialOverCaptureResources;              //@synthesize shouldCopySpatialOverCaptureResources=_shouldCopySpatialOverCaptureResources - In the implementation block
+(id)metadataCopyOptionsForPublishingOriginals;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 ;
-(BOOL)shouldCopyTitleDescriptionAndKeywords;
-(void)setShouldCopyTitleDescriptionAndKeywords:(BOOL)arg1 ;
-(BOOL)shouldCopySpatialOverCaptureResources;
-(void)setShouldCopySpatialOverCaptureResources:(BOOL)arg1 ;
@end

