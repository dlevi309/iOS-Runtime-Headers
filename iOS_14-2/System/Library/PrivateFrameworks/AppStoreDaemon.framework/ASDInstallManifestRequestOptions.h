/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class ASDJobManifest;

@interface ASDInstallManifestRequestOptions : ASDRequestOptions {

	ASDJobManifest* _manifest;

}

@property (nonatomic,copy) ASDJobManifest * manifest;              //@synthesize manifest=_manifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(ASDJobManifest *)manifest;
-(id)initWithCoder:(id)arg1 ;
-(void)setManifest:(ASDJobManifest *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithManifest:(id)arg1 ;
@end

