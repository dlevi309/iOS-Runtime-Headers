/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMStateCaptureAssistant : NSObject {

	unsigned long long _handle;

}

@property (assign,nonatomic) unsigned long long handle;              //@synthesize handle=_handle - In the implementation block
+(unsigned long long)registerStateCaptureBlockWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3 ;
-(void)setHandle:(unsigned long long)arg1 ;
-(unsigned long long)handle;
-(void)deregister;
-(id)initWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3 ;
-(void)dealloc;
@end

