/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithInfo:(id)arg1 ;
-(NSString *)peerIdentifier;
-(void)setPeerIdentifier:(NSString *)arg1 ;
-(void)sendWithCompletion:(/*^block*/id)arg1 ;
@end

