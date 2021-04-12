/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface ASDEnterpriseAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	BOOL _hideUserPrompts;
	NSURL* _manifestURL;

}

@property (assign) BOOL hideUserPrompts;                            //@synthesize hideUserPrompts=_hideUserPrompts - In the implementation block
@property (readonly) NSURL * manifestURL;                           //@synthesize manifestURL=_manifestURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long metadataType; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)metadataType;
-(NSURL *)manifestURL;
-(id)initWithManifestURL:(id)arg1 ;
-(BOOL)hideUserPrompts;
-(void)setHideUserPrompts:(BOOL)arg1 ;
@end

