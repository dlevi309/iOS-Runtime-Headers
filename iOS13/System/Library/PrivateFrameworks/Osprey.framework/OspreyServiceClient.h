/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSURL, NSURLSessionConfiguration;

@interface OspreyServiceClient : NSObject {

	NSURL* _URL;
	NSURLSessionConfiguration* _Conf;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSURLSessionConfiguration * Conf;              //@synthesize Conf=_Conf - In the implementation block
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 ;
-(NSURLSessionConfiguration *)Conf;
@end

