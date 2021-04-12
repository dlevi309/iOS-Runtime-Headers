/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPFilePresenterObserver.h>

@class NSFileProviderManager;

@interface _FPFilePresenterObserver : NSObject <FPFilePresenterObserver> {

	NSFileProviderManager* _parentConnection;

}

@property (__weak) NSFileProviderManager * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
-(void)setParentConnection:(NSFileProviderManager *)arg1 ;
-(NSFileProviderManager *)parentConnection;
-(void)observePresentedFilesDidChange:(id)arg1 ;
@end

