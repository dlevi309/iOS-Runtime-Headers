/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLExtensionPreview : NSObject <NSSecureCoding> {

	NSString* _previewDescription;

}

@property (copy) NSString * previewDescription;              //@synthesize previewDescription=_previewDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(NSString *)previewDescription;
-(void)setPreviewDescription:(NSString *)arg1 ;
@end

