/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@protocol NUVideoProperties;
@interface NUVideoPropertiesJob : NURenderJob {

	id<NUVideoProperties> _videoProperties;

}
-(id)result;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
@end

