/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)baseline;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setBaseline:(long long)arg1 ;
-(void)setInlinePreviewMode:(int)arg1 ;
-(int)inlinePreviewMode;
-(id)propertiesDict;
@end

