/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class ASDJobManifest;

@interface ASDDownloadQueueRequestOptions : ASDRequestOptions {

	ASDJobManifest* _manifest;

}

@property (nonatomic,copy) ASDJobManifest * manifest;              //@synthesize manifest=_manifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ASDJobManifest *)manifest;
-(void)setManifest:(ASDJobManifest *)arg1 ;
-(id)initWithManifest:(id)arg1 ;
@end

