/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, BWFormatRequirements;

@interface BWNodeInputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	int _passthroughMode;
	BOOL _conversionToPassthroughModeNeverAllowed;
	int _retainedBufferCount;
	int _delayedBufferCount;
	int _indefinitelyHeldBufferCount;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;                 //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                       //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) BOOL conversionToPassthroughModeNeverAllowed;              //@synthesize conversionToPassthroughModeNeverAllowed=_conversionToPassthroughModeNeverAllowed - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                   //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) int delayedBufferCount;                                    //@synthesize delayedBufferCount=_delayedBufferCount - In the implementation block
@property (assign,nonatomic) int indefinitelyHeldBufferCount;                           //@synthesize indefinitelyHeldBufferCount=_indefinitelyHeldBufferCount - In the implementation block
-(int)indefinitelyHeldBufferCount;
-(id)init;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(int)delayedBufferCount;
-(void)setRetainedBufferCount:(int)arg1 ;
-(int)retainedBufferCount;
-(int)passthroughMode;
-(void)setPassthroughMode:(int)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setConversionToPassthroughModeNeverAllowed:(BOOL)arg1 ;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(BOOL)conversionToPassthroughModeNeverAllowed;
-(void)setDelayedBufferCount:(int)arg1 ;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(void)dealloc;
@end

