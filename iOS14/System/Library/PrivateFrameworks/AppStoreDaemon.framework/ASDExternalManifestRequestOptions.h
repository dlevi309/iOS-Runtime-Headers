/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions {

	BOOL _shouldHideUserPrompts;
	NSURL* _manifestURL;

}

@property (nonatomic,readonly) NSURL * manifestURL;                   //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign,nonatomic) BOOL shouldHideUserPrompts;              //@synthesize shouldHideUserPrompts=_shouldHideUserPrompts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)manifestURL;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

