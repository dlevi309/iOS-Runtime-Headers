/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <libobjc.A.dylib/HUOpenURLHandling.h>

@class CCUIContentModuleContext, NSString;

@interface HUCCOpenURLHandler : NSObject <HUOpenURLHandling> {

	CCUIContentModuleContext* _context;

}

@property (nonatomic,readonly) CCUIContentModuleContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CCUIContentModuleContext *)context;
-(id)openURL:(id)arg1 ;
-(id)initWithCCModuleContext:(id)arg1 ;
@end

