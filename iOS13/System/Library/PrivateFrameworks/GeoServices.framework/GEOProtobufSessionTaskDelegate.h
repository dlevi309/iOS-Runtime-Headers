/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOProtobufSessionTaskDelegate <NSObject>
@optional
-(void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2;

@required
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

@end

