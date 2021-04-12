/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TUMomentDescriptor : NSObject <NSSecureCoding> {

	NSString* _photosAssetIdentifier;

}

@property (nonatomic,readonly) NSURL * photoViewingAppURL; 
@property (nonatomic,copy,readonly) NSString * photosAssetIdentifier;              //@synthesize photosAssetIdentifier=_photosAssetIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)photosAssetIdentifier;
-(id)initWithPhotosAppAssetIdentifier:(id)arg1 ;
-(NSURL *)photoViewingAppURL;
@end

