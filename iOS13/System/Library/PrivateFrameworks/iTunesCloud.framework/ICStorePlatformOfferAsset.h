/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double previewDuration; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long size; 
-(long long)size;
-(double)duration;
-(id)initWithResponseDictionary:(id)arg1 ;
-(double)previewDuration;
-(NSURL *)previewURL;
@end

