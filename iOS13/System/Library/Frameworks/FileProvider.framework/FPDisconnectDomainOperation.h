/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class NSProgress, FPProviderDomain;

@interface FPDisconnectDomainOperation : FPActionOperation {

	NSProgress* _remoteProgress;
	FPProviderDomain* _domain;

}
-(void)cancel;
-(id)initWithDomain:(id)arg1 ;
-(void)actionMain;
-(void)_tryDisconnectingSafely:(BOOL)arg1 ;
@end

