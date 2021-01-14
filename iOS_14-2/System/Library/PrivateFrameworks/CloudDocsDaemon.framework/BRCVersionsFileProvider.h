/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCFileProvider.h>

@class NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {

	NSMutableDictionary* _operationsByName;

}
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)initWithVolume:(id)arg1 ;
-(id)_fileReactorID;
-(void)dumpToContext:(id)arg1 ;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_physicalURLForURL:(id)arg1 ;
@end

