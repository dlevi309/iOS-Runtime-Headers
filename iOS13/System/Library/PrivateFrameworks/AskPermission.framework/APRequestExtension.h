/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling> {

	NSExtensionContext* _extensionContext;

}

@property (nonatomic,retain) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NSExtensionContext *)extensionContext;
-(void)_finish;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)requestUpdatedWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

