/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class Protocol;

@interface MRWeakProxy : NSObject {

	id _object;
	Protocol* _protocol;

}

@property (assign,nonatomic,__weak) id object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)weakProxyWithObject:(id)arg1 protocol:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
@end

