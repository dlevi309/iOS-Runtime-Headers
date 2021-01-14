/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/


@interface _SUICIntArray2D : NSObject {

	long long* _arrayData;
	unsigned long long _iSize;
	unsigned long long _jSize;
	BOOL _shouldBoundsCheck;

}

@property (nonatomic,readonly) unsigned long long iSize;              //@synthesize iSize=_iSize - In the implementation block
@property (nonatomic,readonly) unsigned long long jSize;              //@synthesize jSize=_jSize - In the implementation block
@property (assign,nonatomic) BOOL shouldBoundsCheck;                  //@synthesize shouldBoundsCheck=_shouldBoundsCheck - In the implementation block
+(id)arrayWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2 ;
-(long long):(unsigned long long)arg1 :(unsigned long long)arg2 ;
-(unsigned long long)iSize;
-(unsigned long long)jSize;
-(id)description;
-(void)setShouldBoundsCheck:(BOOL)arg1 ;
-(long long):(unsigned long long)arg1 :(unsigned long long)arg2 outOfBoundsReturnValue:(long long)arg3 ;
-(BOOL)inBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2 ;
-(id)initWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2 ;
-(void)assertBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2 ;
-(BOOL)shouldBoundsCheck;
-(void):(unsigned long long)arg1 :(unsigned long long)arg2 newValue:(long long)arg3 ;
-(void)dealloc;
@end

