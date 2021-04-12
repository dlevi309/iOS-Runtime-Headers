/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKFileBackedConfigurationSourceDelegate.h>
#import <libobjc.A.dylib/CRKConfigurationSource.h>

@class NSURL, CRKFileBackedConfigurationSource, NSString;

@interface CRKDirectoryBackedConfigurationSource : NSObject <CRKFileBackedConfigurationSourceDelegate, CRKConfigurationSource> {

	NSURL* mDirectoryURL;
	CRKFileBackedConfigurationSource* mFileBackedSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2 callbackQueue:(id)arg3 ;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fileBackedConfigurationSource:(id)arg1 didDeleteConfigurationAtURL:(id)arg2 inDirectory:(id)arg3 ;
-(id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2 ;
-(BOOL)isDirectoryEmpty:(id)arg1 ;
@end

