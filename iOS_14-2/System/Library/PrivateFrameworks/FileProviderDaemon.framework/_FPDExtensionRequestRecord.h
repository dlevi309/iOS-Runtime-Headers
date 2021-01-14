/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@class FPXPCAutomaticErrorProxy, NSDate;

@interface _FPDExtensionRequestRecord : NSObject {

	FPXPCAutomaticErrorProxy* _proxy;
	SEL _selector;
	NSDate* _timeout;

}

@property (__weak) FPXPCAutomaticErrorProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) SEL selector;                        //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) NSDate * timeout;                    //@synthesize timeout=_timeout - In the implementation block
-(void)setProxy:(FPXPCAutomaticErrorProxy *)arg1 ;
-(SEL)selector;
-(FPXPCAutomaticErrorProxy *)proxy;
-(void)setSelector:(SEL)arg1 ;
-(void)setTimeout:(NSDate *)arg1 ;
-(NSDate *)timeout;
-(id)description;
@end

