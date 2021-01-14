/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEIKEv2TransportDelegate;
@class NEIKEv2IKESPI;

@interface NEIKEv2TransportClient : NSObject {

	BOOL _wildcard;
	NEIKEv2IKESPI* _clientSPI;
	id<NEIKEv2TransportDelegate> _delegate;

}

@property (retain) NEIKEv2IKESPI * clientSPI;                          //@synthesize clientSPI=_clientSPI - In the implementation block
@property (assign) BOOL wildcard;                                      //@synthesize wildcard=_wildcard - In the implementation block
@property (__weak) id<NEIKEv2TransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NEIKEv2TransportDelegate>)delegate;
-(void)setDelegate:(id<NEIKEv2TransportDelegate>)arg1 ;
-(BOOL)wildcard;
-(id)description;
-(NEIKEv2IKESPI *)clientSPI;
-(void)setClientSPI:(NEIKEv2IKESPI *)arg1 ;
-(void)setWildcard:(BOOL)arg1 ;
@end

