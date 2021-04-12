/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBody:(NSString *)arg1 ;
-(void)setTarget:(VSScriptSecurityOrigin *)arg1 ;
-(NSString *)body;
-(void)setSource:(VSScriptSecurityOrigin *)arg1 ;
-(id)description;
-(VSScriptSecurityOrigin *)target;
-(VSScriptSecurityOrigin *)source;
@end

