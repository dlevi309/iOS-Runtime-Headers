/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(NSDate *)timeout;
-(void)setTimeout:(NSDate *)arg1 ;
-(void)setProxy:(FPXPCAutomaticErrorProxy *)arg1 ;
-(FPXPCAutomaticErrorProxy *)proxy;
@end

