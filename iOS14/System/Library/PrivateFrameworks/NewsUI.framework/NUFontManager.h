/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUFontRegistration.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSString;

@interface NUFontManager : NSObject <NUFontRegistration> {

	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSCountedSet* _referenceCounts;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registrationQueue;              //@synthesize registrationQueue=_registrationQueue - In the implementation block
@property (nonatomic,readonly) NSCountedSet * referenceCounts;                              //@synthesize referenceCounts=_referenceCounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldUnregisterFontWithURL:(id)arg1 ;
-(BOOL)registerFontWithURL:(id)arg1 error:(id*)arg2 ;
-(void)decreaseReferenceCountForFontWithURL:(id)arg1 ;
-(NSCountedSet *)referenceCounts;
-(BOOL)unregisterFontAtURL:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)registrationQueue;
-(unsigned long long)referenceCountForFontWithURL:(id)arg1 ;
-(void)unregisterFontWithURL:(id)arg1 ;
-(void)increaseReferenceCountForFontWithURL:(id)arg1 ;
@end

