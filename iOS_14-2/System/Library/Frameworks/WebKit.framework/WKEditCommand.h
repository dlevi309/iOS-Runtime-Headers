/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKEditCommand : NSObject {

	RefPtr<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >* _command;

}
-(id)initWithWebEditCommandProxy:(Ref<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >*)arg1 ;
-(WebEditCommandProxy*)command;
@end

