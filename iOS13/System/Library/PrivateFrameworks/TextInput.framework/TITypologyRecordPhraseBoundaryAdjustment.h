/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(int)granularity;
-(void)setGranularity:(int)arg1 ;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(BOOL)forwardAdjustment;
-(void)setForwardAdjustment:(BOOL)arg1 ;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

