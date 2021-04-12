/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITextPosition;

@interface UITextInputArrowKeyHistory : NSObject {

	UITextPosition* startPosition;
	long long amount;
	int anchor;
	UITextPosition* start;
	UITextPosition* end;
	UITextPosition* cursor;
	BOOL affinityDownstream;

}

@property (nonatomic,retain) UITextPosition * startPosition; 
@property (assign,nonatomic) int anchor; 
@property (nonatomic,retain) UITextPosition * start; 
@property (nonatomic,retain) UITextPosition * end; 
@property (nonatomic,retain) UITextPosition * cursor; 
@property (assign,nonatomic) BOOL affinityDownstream; 
@property (assign,nonatomic) long long amount; 
-(void)dealloc;
-(UITextPosition *)cursor;
-(UITextPosition *)start;
-(UITextPosition *)end;
-(long long)amount;
-(void)setAmount:(long long)arg1 ;
-(int)anchor;
-(void)setStart:(UITextPosition *)arg1 ;
-(void)setEnd:(UITextPosition *)arg1 ;
-(void)setAnchor:(int)arg1 ;
-(UITextPosition *)startPosition;
-(BOOL)affinityDownstream;
-(void)setCursor:(UITextPosition *)arg1 ;
-(void)setAffinityDownstream:(BOOL)arg1 ;
-(void)setStartPosition:(UITextPosition *)arg1 ;
@end

