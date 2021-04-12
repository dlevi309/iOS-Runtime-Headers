/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIDocumentState, TIKeyboardState;

@interface TIUserAction : NSObject <NSSecureCoding> {

	int _actionType;
	double _startTime;
	double _endTime;
	double _occurenceTime;
	TIDocumentState* _documentState;
	TIKeyboardState* _keyboardState;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double occurenceTime;                         //@synthesize occurenceTime=_occurenceTime - In the implementation block
@property (assign,nonatomic) int actionType;                               //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;              //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;              //@synthesize keyboardState=_keyboardState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(TIDocumentState *)documentState;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(id)initWithTIKeyboardState:(id)arg1 ;
-(double)occurenceTime;
-(void)setOccurenceTime:(double)arg1 ;
@end

