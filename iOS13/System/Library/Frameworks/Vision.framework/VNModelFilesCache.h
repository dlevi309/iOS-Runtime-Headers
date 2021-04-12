/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface VNModelFilesCache : NSObject {

	unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> >* m_impl;

}
+(id)sharedInstance;
-(id)init;
-(id)load:(id)arg1 ;
-(void)unload:(id)arg1 ;
-(void)purgeAll;
@end

