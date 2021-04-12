/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
*/

#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>

@class UIViewController, NSString;

@interface ILClassificationReportingController : NSObject <MFMessageComposeViewControllerDelegate> {

	UIViewController* _hostViewController;
	/*^block*/id _completion;

}

@property (nonatomic,__weak,readonly) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(UIViewController *)hostViewController;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(id)initWithHostViewController:(id)arg1 ;
-(void)reportResponse:(id)arg1 forExtension:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)reportResponseViaNetwork:(id)arg1 forExtension:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)reportResponseViaSMS:(id)arg1 forExtension:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

