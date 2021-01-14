/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSAttributedString, NSURL, UIImage, NSString;

@interface MKMapAttribution : NSObject {

	NSAttributedString* _string;
	NSURL* _url;
	UIImage* _providerImage;
	NSString* _providerString;
	NSString* _providerName;

}

@property (nonatomic,readonly) NSString * providerString;                //@synthesize providerString=_providerString - In the implementation block
@property (nonatomic,readonly) UIImage * providerImage;                  //@synthesize providerImage=_providerImage - In the implementation block
@property (nonatomic,readonly) NSString * providerName;                  //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,readonly) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
+(id)attributionUrlFromRegionalAttributions:(id)arg1 ;
-(id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 underlineText:(BOOL)arg3 applyLinkAttribution:(BOOL)arg4 scale:(double)arg5 ;
-(NSURL *)url;
-(UIImage *)providerImage;
-(NSAttributedString *)string;
-(id)attributedStringWithImage:(id)arg1 ;
-(id)disclosureArrow;
-(NSString *)providerString;
-(NSString *)providerName;
@end

