/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(NSURL *)manifestURL;
@end

