/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOProtobufSessionTaskDelegate <NSObject>
@optional
-(void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2;

@required
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

@end

