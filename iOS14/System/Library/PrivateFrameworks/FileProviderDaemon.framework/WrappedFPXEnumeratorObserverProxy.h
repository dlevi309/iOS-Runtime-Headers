/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPXEnumeratorObserver.h>

@protocol FPXEnumeratorObserver;
@class NSString;

@interface WrappedFPXEnumeratorObserverProxy : NSObject <FPXEnumeratorObserver> {

	id<FPXEnumeratorObserver> _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerationResultsDidChange;
-(id)initWithTarget:(id)arg1 ;
-(void)didUpdateItem:(id)arg1 ;
@end

