/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@class NSString;

@interface CLKAssertionBlockSentinel : NSObject {

	BOOL _called;
	BOOL _fatal;
	NSString* _message;
	/*^block*/id _fallbackBlock;

}

@property (nonatomic,copy) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (getter=isCalled) BOOL called;                                   //@synthesize called=_called - In the implementation block
@property (assign,getter=shouldBeFatal,nonatomic) BOOL fatal;              //@synthesize fatal=_fatal - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                               //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setCalled:(BOOL)arg1 ;
-(void)setFatal:(BOOL)arg1 ;
-(void)dealloc;
-(void)setFallbackBlock:(id)arg1 ;
-(id)fallbackBlock;
-(BOOL)isCalled;
-(BOOL)shouldBeFatal;
-(void)markCalled;
@end

