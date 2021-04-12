/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVMetadataItemValueRequestInternal, AVMetadataItem;

@interface AVMetadataItemValueRequest : NSObject {

	AVMetadataItemValueRequestInternal* _valueRequest;

}

@property (__weak,readonly) AVMetadataItem * metadataItem; 
+(id)metadataItemValueRequestWithMetadataItem:(id)arg1 ;
-(id)dataType;
-(id)error;
-(id)initWithMetadataItem:(id)arg1 ;
-(void)respondWithValue:(id)arg1 dataType:(id)arg2 ;
-(void)respondWithValue:(id)arg1 ;
-(void)respondWithError:(id)arg1 ;
-(AVMetadataItem *)metadataItem;
-(id)value;
-(void)dealloc;
@end

