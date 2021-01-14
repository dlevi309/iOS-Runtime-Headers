/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextPosition *)end;
-(UITextPosition *)start;
-(void)setEnd:(UITextPosition *)arg1 ;
-(UITextPosition *)startPosition;
-(void)setAmount:(long long)arg1 ;
-(UITextPosition *)cursor;
-(BOOL)affinityDownstream;
-(void)setStartPosition:(UITextPosition *)arg1 ;
-(void)setAffinityDownstream:(BOOL)arg1 ;
-(long long)amount;
-(int)anchor;
-(void)setAnchor:(int)arg1 ;
-(void)setStart:(UITextPosition *)arg1 ;
-(void)dealloc;
-(void)setCursor:(UITextPosition *)arg1 ;
@end

