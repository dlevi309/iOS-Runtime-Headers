/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord {

	BOOL _forwardAdjustment;
	int _granularity;
	TIKeyboardState* _keyboardState;
	TIKeyboardConfiguration* _keyboardConfig;

}

@property (assign,nonatomic) BOOL forwardAdjustment;                                //@synthesize forwardAdjustment=_forwardAdjustment - In the implementation block
@property (assign,nonatomic) int granularity;                                       //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(BOOL)forwardAdjustment;
-(void)setForwardAdjustment:(BOOL)arg1 ;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(void)applyToStatistic:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setGranularity:(int)arg1 ;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
-(int)granularity;
@end

