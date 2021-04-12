/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/

@class NSSet;


@protocol PHMediaFormatConversionImplementation <NSObject>
@property (readonly) long long transferBehaviorUserPreference; 
@property (readonly) NSSet * ut_objectsToBeDeallocatedWithReceiver; 
@optional
-(NSSet *)ut_objectsToBeDeallocatedWithReceiver;

@required
-(long long)transferBehaviorUserPreference;
-(void)performConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

