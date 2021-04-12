/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <libobjc.A.dylib/TUPluggableDelegate.h>

@interface TSPlugin : NSObject <TUPluggableDelegate> {

	 identifier;
	 delegate;
	 viewController;
	 layoutRevision;
	 layoutRevisionLock;
	 previousSize;
	 previousSizeLock;

}
-(void)pluggableViewController:(id)arg1 didChangeSizeTo:(CGSize)arg2 ;
-(id)init;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
@end

