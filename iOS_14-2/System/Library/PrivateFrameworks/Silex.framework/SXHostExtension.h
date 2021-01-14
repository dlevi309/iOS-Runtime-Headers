/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXHost.h>

@class NSExtensionContext, NSString;

@interface SXHostExtension : NSObject <SXHost> {

	BOOL _isActive;
	NSExtensionContext* _extensionContext;

}

@property (assign,nonatomic,__weak) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                             //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canOpenURL:(id)arg1 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSExtensionContext *)extensionContext;
-(BOOL)active;
-(BOOL)isActive;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)extensionHostDidBecomeActive:(id)arg1 ;
-(void)extensionHostDidEnterBackground:(id)arg1 ;
-(void)extensionHostWillEnterForeground:(id)arg1 ;
-(id)initWithExtensionContext:(id)arg1 ;
@end

