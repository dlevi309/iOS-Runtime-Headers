/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWTimeSkew : NSObject {

	SCD_Struct_BW8 _native;
	SCD_Struct_BW8 _original;
	SCD_Struct_BW8 _adjusted;
	BOOL _isBracketFrame;
	BOOL _isSISFrame;
	BOOL _isStartOfDiscontinuity;

}

@property (nonatomic,readonly) SCD_Struct_BW8 native;                  //@synthesize native=_native - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 original;                //@synthesize original=_original - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 adjusted;                  //@synthesize adjusted=_adjusted - In the implementation block
@property (nonatomic,readonly) BOOL isBracketFrame;                    //@synthesize isBracketFrame=_isBracketFrame - In the implementation block
@property (nonatomic,readonly) BOOL isSISFrame;                        //@synthesize isSISFrame=_isSISFrame - In the implementation block
@property (assign,nonatomic) BOOL isStartOfDiscontinuity;              //@synthesize isStartOfDiscontinuity=_isStartOfDiscontinuity - In the implementation block
-(id)description;
-(void)setAdjusted:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)original;
-(id)initWithNativeTime:(SCD_Struct_BW8)arg1 originalTime:(SCD_Struct_BW8)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(BOOL)isStartOfDiscontinuity;
-(SCD_Struct_BW8)native;
-(SCD_Struct_BW8)adjusted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsStartOfDiscontinuity:(BOOL)arg1 ;
-(BOOL)isBracketFrame;
-(BOOL)isSISFrame;
@end

