/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString, VSScriptSecurityOrigin;

@interface VSScriptMessage : NSObject {

	NSString* _body;
	VSScriptSecurityOrigin* _source;
	VSScriptSecurityOrigin* _target;

}

@property (nonatomic,copy) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * target;              //@synthesize target=_target - In the implementation block
-(id)description;
-(void)setSource:(VSScriptSecurityOrigin *)arg1 ;
-(void)setTarget:(VSScriptSecurityOrigin *)arg1 ;
-(VSScriptSecurityOrigin *)target;
-(VSScriptSecurityOrigin *)source;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
@end

