/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLRequest.h>

@interface SLInternalTencentWeiboRequest : SLRequest {

	BOOL _shouldSign;

}

@property (assign) BOOL shouldSign;              //@synthesize shouldSign=_shouldSign - In the implementation block
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldSign;
-(id)signedTencentRequestFromRequest:(id)arg1 ;
-(void)_addAuthenticationParameters:(id)arg1 ;
-(void)setShouldSign:(BOOL)arg1 ;
@end

