/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKConfigurationSource;
@interface CRKSynchronousConfigurationSource : NSObject {

	id<CRKConfigurationSource> mBaseSource;

}
-(id)initWithConfigurationSource:(id)arg1 ;
-(id)configurationWithError:(id*)arg1 ;
-(BOOL)setConfiguration:(id)arg1 error:(id*)arg2 ;
@end

