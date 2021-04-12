/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface PKPaymentSetupProductImageAssetURLs : NSObject <NSCopying> {

	NSURL* _digitalCardImageUrl;
	NSURL* _thumbnailImageUrl;
	NSURL* _logoImageUrl;

}

@property (nonatomic,readonly) NSURL * digitalCardImageUrl;              //@synthesize digitalCardImageUrl=_digitalCardImageUrl - In the implementation block
@property (nonatomic,readonly) NSURL * thumbnailImageUrl;                //@synthesize thumbnailImageUrl=_thumbnailImageUrl - In the implementation block
@property (nonatomic,readonly) NSURL * logoImageUrl;                     //@synthesize logoImageUrl=_logoImageUrl - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImageAssetsDictionary:(id)arg1 ;
-(NSURL *)digitalCardImageUrl;
-(NSURL *)thumbnailImageUrl;
-(NSURL *)logoImageUrl;
@end

