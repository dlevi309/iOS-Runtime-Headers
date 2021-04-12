/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@interface MPCFWrapper : NSObject {

	BOOL _nullRef;
	const void* _refValue;

}

@property (assign,getter=isNullRef,nonatomic) BOOL nullRef;              //@synthesize nullRef=_nullRef - In the implementation block
@property (nonatomic,readonly) const void* refValue;                     //@synthesize refValue=_refValue - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithCFType:(void*)arg1 ;
-(const void*)refValue;
-(BOOL)isNullRef;
-(void)setNullRef:(BOOL)arg1 ;
@end

