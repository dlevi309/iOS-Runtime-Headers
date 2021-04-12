/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSString, BWFormatRequirements;

@interface BWNodeInputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	int _passthroughMode;
	int _retainedBufferCount;
	int _delayedBufferCount;
	int _indefinitelyHeldBufferCount;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;              //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                    //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) int delayedBufferCount;                                 //@synthesize delayedBufferCount=_delayedBufferCount - In the implementation block
@property (assign,nonatomic) int indefinitelyHeldBufferCount;                        //@synthesize indefinitelyHeldBufferCount=_indefinitelyHeldBufferCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setPassthroughMode:(int)arg1 ;
-(int)retainedBufferCount;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(int)passthroughMode;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
@end

