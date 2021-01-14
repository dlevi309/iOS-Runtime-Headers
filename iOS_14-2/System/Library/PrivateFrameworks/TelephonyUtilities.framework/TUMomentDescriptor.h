/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)photosAssetIdentifier;
-(id)initWithPhotosAppAssetIdentifier:(id)arg1 ;
-(NSURL *)photoViewingAppURL;
@end

