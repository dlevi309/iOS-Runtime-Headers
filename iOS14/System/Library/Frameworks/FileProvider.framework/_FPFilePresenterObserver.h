/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPFilePresenterObserver.h>

@class NSFileProviderManager;

@interface _FPFilePresenterObserver : NSObject <FPFilePresenterObserver> {

	NSFileProviderManager* _parentConnection;

}

@property (__weak) NSFileProviderManager * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
-(NSFileProviderManager *)parentConnection;
-(void)observePresentedFilesDidChange:(id)arg1 ;
-(void)setParentConnection:(NSFileProviderManager *)arg1 ;
@end

