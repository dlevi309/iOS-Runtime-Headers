/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContentType:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)contentType;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isAudioOnly;
-(id)initWithCoder:(id)arg1 ;
@end

