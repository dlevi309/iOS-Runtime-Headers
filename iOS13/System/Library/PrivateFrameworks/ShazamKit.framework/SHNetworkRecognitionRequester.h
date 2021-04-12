/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/SHNetworkRecognitionRequester.h>

@protocol SHNetworkRecognitionRequester <NSObject>
@required
-(void)makeRequest:(id)arg1 withCallback:(/*^block*/id)arg2;

@end


@class NSURLSession, NSString;

@interface SHNetworkRecognitionRequester : NSObject <NSURLSessionDelegate, SHNetworkRecognitionRequester> {

	NSURLSession* _URLSession;

}

@property (nonatomic,retain) NSURLSession * URLSession;              //@synthesize URLSession=_URLSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(id)sessionConfiguration;
-(id)taskWithRequest:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)makeRequest:(id)arg1 withCallback:(/*^block*/id)arg2 ;
@end

