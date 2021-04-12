/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <Foundation/NSExtensionContext.h>

@protocol _SBUIPopoverExtensionHostInterface;
@interface _SBUIPopoverExtensionContext : NSExtensionContext {

	id<_SBUIPopoverExtensionHostInterface> _hostService;

}

@property (assign,nonatomic,__weak) id<_SBUIPopoverExtensionHostInterface> hostService;              //@synthesize hostService=_hostService - In the implementation block
-(id<_SBUIPopoverExtensionHostInterface>)hostService;
-(void)setHostService:(id<_SBUIPopoverExtensionHostInterface>)arg1 ;
-(void)requestDismiss;
@end

