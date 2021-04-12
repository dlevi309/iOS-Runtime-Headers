/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHImageDecoder : NSObject
+(id)sharedDecoder;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1 ;
@end

