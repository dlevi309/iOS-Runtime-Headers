/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@class NSString, NSArray;

@interface HRSpeedBumpItem : NSObject {

	NSString* _title;
	NSString* _body;
	NSArray* _bubbles;
	id _delegate;

}

@property (nonatomic,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSArray * bubbles;              //@synthesize bubbles=_bubbles - In the implementation block
@property (assign,nonatomic,__weak) id delegate;               //@synthesize delegate=_delegate - In the implementation block
-(NSString *)body;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSArray *)bubbles;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 body:(id)arg2 bubbles:(id)arg3 ;
@end

