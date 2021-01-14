/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSPaymentSheetRatingImage : NSObject <NSCopying> {

	CGImageRef _image;
	long long _ratingType;
	NSString* _urlString;
	NSString* _value;

}

@property (readonly) long long ratingType;                   //@synthesize ratingType=_ratingType - In the implementation block
@property (readonly) BOOL tint; 
@property (copy,readonly) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
@property (copy,readonly) NSString * value;                  //@synthesize value=_value - In the implementation block
-(NSString *)urlString;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithURLString:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)ratingType;
-(BOOL)isServerSupplied;
-(id)localAssetName;
-(long long)_ratingTypeForType:(id)arg1 ;
-(BOOL)tint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
@end

