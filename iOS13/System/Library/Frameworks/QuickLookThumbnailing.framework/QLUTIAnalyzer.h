/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding> {

	NSString* _contentType;

}

@property (readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)UTIForURL:(id)arg1 ;
+(BOOL)isTypeAudioOnly:(id)arg1 ;
+(id)knownExtensions;
+(id)privateUTIFromFileName:(id)arg1 ;
+(id)removeSpacesFromString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)contentType;
-(BOOL)isAudioOnly;
-(id)initWithContentType:(id)arg1 ;
@end

