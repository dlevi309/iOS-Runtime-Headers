/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class NSString, NSURL;

@interface BCSParsedURLData : NSObject <BCSParsedDataPrivate> {

	long long _type;
	NSString* _extraPreviewText;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * extraPreviewText;              //@synthesize extraPreviewText=_extraPreviewText - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(NSString *)extraPreviewText;
-(id)initWithURL:(id)arg1 type:(long long)arg2 ;
-(id)initWithURL:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3 ;
@end

