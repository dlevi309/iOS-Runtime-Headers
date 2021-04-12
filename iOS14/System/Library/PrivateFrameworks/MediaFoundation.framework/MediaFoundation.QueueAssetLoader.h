/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/

#import <libobjc.A.dylib/MFStateDumpable.h>
#import <libobjc.A.dylib/MFStateDumpable.h>

@class NSDictionary;

@interface MediaFoundation.QueueAssetLoader : _UKNOWN_SUPERCLASS_ <MFStateDumpable, MFStateDumpable> {

	 delegate;
	 token;
	 wrapAround;
	 queueController;
	 itemLoader;
	 itemBuffer;
	 loadingCompletions;
	 reporter;
	 errorController;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(NSDictionary *)stateDictionary;
@end

