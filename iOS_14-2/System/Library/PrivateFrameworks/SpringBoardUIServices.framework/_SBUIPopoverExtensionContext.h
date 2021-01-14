/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

