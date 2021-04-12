/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKConfigurationSource.h>

@protocol CRKConfigurationSource;
@class NSString;

@interface CRKCurrentPlatformProfileConfigurationSource : NSObject <CRKConfigurationSource> {

	id<CRKConfigurationSource> mBaseSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)makeSourceForCurrentPlatformWithCallbackQueue:(id)arg1 ;
-(id)makeiOSConfigurationSourceWithCallbackQueue:(id)arg1 ;
-(id)makeMacOSConfigurationSourceWithCallbackQueue:(id)arg1 ;
@end

