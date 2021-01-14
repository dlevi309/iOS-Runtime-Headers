/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFClientGetDeviceAssetsResults : NSObject <NSSecureCoding> {

	NSString* _assetBundlePath;

}

@property (nonatomic,copy) NSString * assetBundlePath;              //@synthesize assetBundlePath=_assetBundlePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)assetBundlePath;
-(void)setAssetBundlePath:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

