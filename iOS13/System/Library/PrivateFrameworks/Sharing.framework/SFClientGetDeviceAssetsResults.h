/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)assetBundlePath;
-(void)setAssetBundlePath:(NSString *)arg1 ;
@end

