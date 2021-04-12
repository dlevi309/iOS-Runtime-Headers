/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSApplication.h>
@class NSDictionary;


@protocol IKJSApplication <JSExport>
@property (nonatomic,readonly) NSDictionary * traitCollection; 
@required
-(NSDictionary *)traitCollection;
-(void)reload:(id)arg1 :(id)arg2;

@end

#import <libobjc.A.dylib/_IKJSApplicationProxy.h>
#import <libobjc.A.dylib/_IKJSApplication.h>

@class NSString, NSDictionary;

@interface IKJSApplication : IKJSObject <NSObject, IKJSApplication, _IKJSApplicationProxy, _IKJSApplication>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * traitCollection; 
-(void)update;
-(NSDictionary *)traitCollection;
-(void)reload:(id)arg1 :(id)arg2 ;
-(id)asPrivateIKJSApplication;
-(void)launchAppWithOptions:(id)arg1 ;
-(void)suspendAppWithOptions:(id)arg1 ;
-(void)resumeAppWithOptions:(id)arg1 ;
-(void)openURLWithOptions:(id)arg1 ;
-(void)exitAppWithOptions:(id)arg1 ;
-(void)updatedAppWithOptions:(id)arg1 ;
-(void)traitCollectionChanged:(id)arg1 ;
-(BOOL)requestDocumentWithContext:(id)arg1 response:(id)arg2 ;
-(void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3 ;
@end

