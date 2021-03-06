/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class NSString, NSURL;

@interface SFRemoteAutoFillScanAction : NSObject {

	NSString* _message;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(void)actionForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)title;
@end

