/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, MLMultiArray;

@interface SGStructuredEventCoreMLInputWrapper : NSObject <MLFeatureProvider> {

	MLMultiArray* _L;
	MLMultiArray* _D;
	MLMultiArray* _I;
	MLMultiArray* _N;
	MLMultiArray* _W;
	MLMultiArray* _bi_lstm_0_h_in;
	MLMultiArray* _bi_lstm_0_c_in;
	MLMultiArray* _bi_lstm_0_h_in_rev;
	MLMultiArray* _bi_lstm_0_c_in_rev;

}

@property (L,nonatomic,retain) MLMultiArray * L;                             //@synthesize L=_L - In the implementation block
@property (nonatomic,retain) MLMultiArray * D;                               //@synthesize D=_D - In the implementation block
@property (I,nonatomic,retain) MLMultiArray * I;                             //@synthesize I=_I - In the implementation block
@property (nonatomic,nonatomic,retain) MLMultiArray * N;                     //@synthesize N=_N - In the implementation block
@property (__weak,nonatomic,retain) MLMultiArray * W;                        //@synthesize W=_W - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_h_in;                  //@synthesize bi_lstm_0_h_in=_bi_lstm_0_h_in - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_c_in;                  //@synthesize bi_lstm_0_c_in=_bi_lstm_0_c_in - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_h_in_rev;              //@synthesize bi_lstm_0_h_in_rev=_bi_lstm_0_h_in_rev - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_c_in_rev;              //@synthesize bi_lstm_0_c_in_rev=_bi_lstm_0_c_in_rev - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(MLMultiArray *)I;
-(MLMultiArray *)L;
-(MLMultiArray *)D;
-(MLMultiArray *)N;
-(id)featureValueForName:(id)arg1 ;
-(void)setI:(MLMultiArray *)arg1 ;
-(NSSet *)featureNames;
-(void)setN:(MLMultiArray *)arg1 ;
-(void)setL:(MLMultiArray *)arg1 ;
-(void)setD:(MLMultiArray *)arg1 ;
-(MLMultiArray *)W;
-(void)setW:(MLMultiArray *)arg1 ;
-(id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5 ;
-(id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5 bi_lstm_0_h_in:(id)arg6 bi_lstm_0_c_in:(id)arg7 bi_lstm_0_h_in_rev:(id)arg8 bi_lstm_0_c_in_rev:(id)arg9 ;
-(MLMultiArray *)bi_lstm_0_h_in;
-(void)setBi_lstm_0_h_in:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_c_in;
-(void)setBi_lstm_0_c_in:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_h_in_rev;
-(void)setBi_lstm_0_h_in_rev:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_c_in_rev;
-(void)setBi_lstm_0_c_in_rev:(MLMultiArray *)arg1 ;
@end

