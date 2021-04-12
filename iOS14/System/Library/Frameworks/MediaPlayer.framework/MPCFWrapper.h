/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@interface MPCFWrapper : NSObject {

	BOOL _nullRef;
	const void* _refValue;

}

@property (assign,getter=isNullRef,nonatomic) BOOL nullRef;              //@synthesize nullRef=_nullRef - In the implementation block
@property (nonatomic,readonly) const void* refValue;                     //@synthesize refValue=_refValue - In the implementation block
-(const void*)refValue;
-(BOOL)isNullRef;
-(void)setNullRef:(BOOL)arg1 ;
-(id)initWithCFType:(void*)arg1 ;
-(id)description;
-(void)dealloc;
@end

