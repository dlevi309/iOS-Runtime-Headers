/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class NSProgress, FPProviderDomain;

@interface FPDisconnectDomainOperation : FPActionOperation {

	NSProgress* _remoteProgress;
	FPProviderDomain* _domain;

}
-(id)initWithDomain:(id)arg1 ;
-(void)actionMain;
-(void)_tryDisconnectingSafely:(BOOL)arg1 ;
-(void)cancel;
@end

