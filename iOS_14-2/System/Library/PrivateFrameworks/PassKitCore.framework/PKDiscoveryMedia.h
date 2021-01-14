/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, PKColor, NSString, NSURL;

@interface PKDiscoveryMedia : NSObject <NSSecureCoding> {

	long long _type;
	NSDictionary* _urls;
	double _width;
	double _height;
	PKColor* _backgroundColor;
	NSString* _passKitUIImageName;
	NSURL* _localAssetURL;

}

@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * urls;                        //@synthesize urls=_urls - In the implementation block
@property (nonatomic,readonly) double width;                               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) PKColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSString * passKitUIImageName;              //@synthesize passKitUIImageName=_passKitUIImageName - In the implementation block
@property (nonatomic,readonly) NSURL * localAssetURL;                      //@synthesize localAssetURL=_localAssetURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)urls;
-(double)width;
-(void)encodeWithCoder:(id)arg1 ;
-(double)height;
-(id)initWithDictionary:(id)arg1 ;
-(PKColor *)backgroundColor;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)_remoteAssetForScale:(double)arg1 ;
-(id)imageDataFromCacheWithScale:(double)arg1 ;
-(NSString *)passKitUIImageName;
-(void)downloadImageDataWithScale:(double)arg1 shouldWriteData:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSURL *)localAssetURL;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

