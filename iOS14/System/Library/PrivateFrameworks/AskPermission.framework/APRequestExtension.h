/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSExtensionContext *)extensionContext;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)_finish;
-(void)requestUpdatedWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

