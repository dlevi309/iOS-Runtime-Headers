/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

