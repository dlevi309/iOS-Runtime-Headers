/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <Foundation/NSXPCListener.h>

@class NSString;

@interface NEProviderXPCListener : NSXPCListener {

	NSString* _extensionContextClassName;

}

@property (nonatomic,readonly) NSString * extensionContextClassName;              //@synthesize extensionContextClassName=_extensionContextClassName - In the implementation block
-(NSString *)extensionContextClassName;
-(id)initWithExtensionContextClassName:(id)arg1 ;
@end

