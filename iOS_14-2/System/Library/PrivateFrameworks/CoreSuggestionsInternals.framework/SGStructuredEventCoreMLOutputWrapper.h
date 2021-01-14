/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SGStructuredEventCoreMLOutputWrapper : NSObject <MLFeatureProvider> {

	MLMultiArray* _location;
	MLMultiArray* _time;
	MLMultiArray* _title;
	MLMultiArray* _core;
	MLMultiArray* _bi_lstm_0_h_out;
	MLMultiArray* _bi_lstm_0_c_out;
	MLMultiArray* _bi_lstm_0_h_out_rev;
	MLMultiArray* _bi_lstm_0_c_out_rev;

}

@property (nonatomic,retain) MLMultiArray * location;                         //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) MLMultiArray * time;                             //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) MLMultiArray * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) MLMultiArray * core;                             //@synthesize core=_core - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_h_out;                  //@synthesize bi_lstm_0_h_out=_bi_lstm_0_h_out - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_c_out;                  //@synthesize bi_lstm_0_c_out=_bi_lstm_0_c_out - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_h_out_rev;              //@synthesize bi_lstm_0_h_out_rev=_bi_lstm_0_h_out_rev - In the implementation block
@property (nonatomic,retain) MLMultiArray * bi_lstm_0_c_out_rev;              //@synthesize bi_lstm_0_c_out_rev=_bi_lstm_0_c_out_rev - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(MLMultiArray *)time;
-(void)setTime:(MLMultiArray *)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)core;
-(MLMultiArray *)location;
-(void)setTitle:(MLMultiArray *)arg1 ;
-(void)setLocation:(MLMultiArray *)arg1 ;
-(MLMultiArray *)title;
-(id)initWithLocation:(id)arg1 time:(id)arg2 title:(id)arg3 core:(id)arg4 bi_lstm_0_h_out:(id)arg5 bi_lstm_0_c_out:(id)arg6 bi_lstm_0_h_out_rev:(id)arg7 bi_lstm_0_c_out_rev:(id)arg8 ;
-(void)setCore:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_h_out;
-(void)setBi_lstm_0_h_out:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_c_out;
-(void)setBi_lstm_0_c_out:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_h_out_rev;
-(void)setBi_lstm_0_h_out_rev:(MLMultiArray *)arg1 ;
-(MLMultiArray *)bi_lstm_0_c_out_rev;
-(void)setBi_lstm_0_c_out_rev:(MLMultiArray *)arg1 ;
@end

