/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Foundation/NSExtensionContext.h>

@class NSBundle;

@interface INExtensionContextHost : NSExtensionContext {

	NSBundle* _extensionBundle;

}

@property (nonatomic,retain) NSBundle * extensionBundle;              //@synthesize extensionBundle=_extensionBundle - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(NSBundle *)extensionBundle;
-(void)setExtensionBundle:(NSBundle *)arg1 ;
@end

