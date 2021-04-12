/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATMessageLinkRequestHandler.h>

@class NSFileManager, NSString;

@interface ATRemoteFileManagerLinkHandler : NSObject <ATMessageLinkRequestHandler> {

	NSFileManager* _fm;
	NSString* _rootPath;

}

@property (nonatomic,copy) NSString * rootPath;                     //@synthesize rootPath=_rootPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)rootPath;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)_path:(id)arg1 ;
-(id)_createDirectory:(id)arg1 ;
-(id)_directoryContents:(id)arg1 ;
-(id)_usage:(id)arg1 ;
-(id)_uploadFile:(id)arg1 ;
-(id)_downloadFile:(id)arg1 ;
-(id)_moveItems:(id)arg1 ;
-(id)_removeItems:(id)arg1 ;
-(id)_copyItems:(id)arg1 ;
-(id)_freeSpace:(id)arg1 ;
-(id)_progress:(id)arg1 ;
-(id)initWithRootPath:(id)arg1 ;
-(void)setRootPath:(NSString *)arg1 ;
@end

