/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithTarget:(id)arg1 ;
-(void)enumerationResultsDidChange;
-(void)didUpdateItem:(id)arg1 ;
@end

