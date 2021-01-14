/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString;


@protocol IKNetworkRequestRecord <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long resourceType; 
@property (nonatomic,readonly) long long initiatorType; 
@property (nonatomic,readonly) long long state; 
@required
-(long long)resourceType;
-(void)didReceiveData:(id)arg1;
-(long long)state;
-(NSString *)identifier;
-(void)didFailWithError:(id)arg1;
-(void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(/*^block*/id)arg2;
-(void)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
-(long long)initiatorType;
-(void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3;
-(void)willSendRequest:(id)arg1;
-(void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
-(void)didCompleteLoadingFromMemoryWithRequest:(id)arg1 response:(id)arg2 withResponseBodyBlock:(/*^block*/id)arg3;
-(void)didCompleteLoadingWithResponseBody:(id)arg1;

@end

