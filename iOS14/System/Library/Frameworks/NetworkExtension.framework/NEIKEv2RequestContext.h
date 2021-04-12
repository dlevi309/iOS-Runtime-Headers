/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@interface NEIKEv2RequestContext : NSObject {

	BOOL _requestInitiator;
	int _requestType;

}

@property (assign,nonatomic) int requestType;                    //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL requestInitiator;              //@synthesize requestInitiator=_requestInitiator - In the implementation block
-(void)setRequestType:(int)arg1 ;
-(int)requestType;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 ;
-(id)description;
-(id)initWithRequestType:(int)arg1 ;
-(void)setRequestInitiator:(BOOL)arg1 ;
-(BOOL)requestInitiator;
@end

