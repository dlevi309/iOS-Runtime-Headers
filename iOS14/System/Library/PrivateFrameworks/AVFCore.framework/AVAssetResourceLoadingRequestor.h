/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetResourceLoadingRequestorInternal;

@interface AVAssetResourceLoadingRequestor : NSObject {

	AVAssetResourceLoadingRequestorInternal* _requestor;

}

@property (nonatomic,readonly) BOOL providesExpiredSessionReports; 
-(id)initWithRequestInfo:(CFDictionaryRef)arg1 ;
-(BOOL)providesExpiredSessionReports;
-(void)dealloc;
@end

