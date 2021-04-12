/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCFileProvider.h>

@class NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {

	NSMutableDictionary* _operationsByName;

}
-(id)_fileReactorID;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)_physicalURLForURL:(id)arg1 ;
-(id)initWithVolume:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
@end

