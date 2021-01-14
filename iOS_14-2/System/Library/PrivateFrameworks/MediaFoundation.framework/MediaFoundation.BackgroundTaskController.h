/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/

#import <libobjc.A.dylib/MFResettable.h>
#import <libobjc.A.dylib/MFStateDumpable.h>

@class NSDictionary;

@interface MediaFoundation.BackgroundTaskController : _UKNOWN_SUPERCLASS_ <MFResettable, MFStateDumpable> {

	 provider;
	 reporter;
	 tasks;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(NSDictionary *)stateDictionary;
-(void)reset;
@end

