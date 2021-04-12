/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLThumbnailMetadata : NSObject <NSSecureCoding> {

	int _inlinePreviewMode;
	long long _baseline;

}

@property (assign) int inlinePreviewMode;              //@synthesize inlinePreviewMode=_inlinePreviewMode - In the implementation block
@property (assign) long long baseline;                 //@synthesize baseline=_baseline - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)thumbnailMetadataFromPropertiesDictionary:(id)arg1 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBaseline:(long long)arg1 ;
-(long long)baseline;
-(void)setInlinePreviewMode:(int)arg1 ;
-(int)inlinePreviewMode;
-(id)propertiesDict;
@end

