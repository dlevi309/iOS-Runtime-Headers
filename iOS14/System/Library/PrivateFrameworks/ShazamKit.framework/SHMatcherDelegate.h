/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@protocol SHMatcherDelegate <NSObject>
@required
-(void)matcher:(id)arg1 didFindMatchingResponse:(id)arg2;
-(void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 matcherResponse:(id)arg3;
-(void)matcher:(id)arg1 didFailForSignature:(id)arg2 matcherResponse:(id)arg3 withError:(id)arg4;
-(void)didFinishForMatcher:(id)arg1;

@end

