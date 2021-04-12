/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKEditCommand : NSObject {

	RefPtr<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >* _command;

}
-(WebEditCommandProxy*)command;
-(id)initWithWebEditCommandProxy:(Ref<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >*)arg1 ;
@end

