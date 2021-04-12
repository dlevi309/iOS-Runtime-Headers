/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKInvalidatable.h>

@protocol NSCopying;
@class NSExtension, NSExtensionContext, NSString;

@interface PKExtensionRequestHandler : NSObject <PKInvalidatable> {

	NSExtension* _extension;
	NSExtensionContext* _extensionContext;
	id<NSCopying> _requestIdentifier;
	BOOL _invalidated;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtensionContext *)extensionContext;
-(BOOL)isInvalidated;
-(id)init;
-(id)_initWithExtension:(id)arg1 extensionRequestOptions:(unsigned long long)arg2 ;
-(void)invalidate;
-(void)dealloc;
@end

