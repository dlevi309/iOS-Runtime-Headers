/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionURLOpener.h>

@class LSApplicationWorkspace, NSString;

@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener> {

	LSApplicationWorkspace* _workspace;

}

@property (nonatomic,readonly) LSApplicationWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlCouldNotBeOpenedErrorWithURL:(id)arg1 ;
+(id)openConfigurationWithEndpoint:(id)arg1 isSensitive:(BOOL)arg2 ;
-(id)init;
-(LSApplicationWorkspace *)workspace;
-(id)initWithWorkspace:(id)arg1 ;
-(id)openURL:(id)arg1 isSensitive:(BOOL)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4 ;
-(id)openURL:(id)arg1 isSensitive:(BOOL)arg2 withScheduler:(id)arg3 ;
-(id)openURL:(id)arg1 withScheduler:(id)arg2 ;
@end

