/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSExtensionContext, NSString;

@interface AUViewController : UIViewController <NSExtensionRequestHandling> {

	NSExtensionContext* _context;

}

@property (assign) NSExtensionContext * context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtensionContext *)context;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)setContext:(NSExtensionContext *)arg1 ;
@end

