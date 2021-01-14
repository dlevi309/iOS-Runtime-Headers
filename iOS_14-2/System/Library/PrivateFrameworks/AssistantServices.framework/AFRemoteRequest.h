/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class AFRequestInfo, NSString;

@interface AFRemoteRequest : NSObject {

	AFRequestInfo* _info;
	NSString* _peerIdentifier;

}

@property (nonatomic,readonly) AFRequestInfo * info;               //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSString * peerIdentifier;              //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
-(AFRequestInfo *)info;
-(NSString *)peerIdentifier;
-(void)sendWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)setPeerIdentifier:(NSString *)arg1 ;
@end

