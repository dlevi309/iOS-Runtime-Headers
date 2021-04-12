/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <AppSupportUI/NUIContainerGridView.h>

@class NSMutableArray;

@interface TLKKeyValueGridView : NUIContainerGridView {

	NSMutableArray* _keyLabels;
	NSMutableArray* _valueLabels;

}

@property (nonatomic,retain) NSMutableArray * keyLabels;                //@synthesize keyLabels=_keyLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * valueLabels;              //@synthesize valueLabels=_valueLabels - In the implementation block
-(id)init;
-(void)updateWithTuples:(id)arg1 valueColumnIsTrailing:(BOOL)arg2 truncateKey:(BOOL)arg3 ;
-(NSMutableArray *)keyLabels;
-(void)setKeyLabels:(NSMutableArray *)arg1 ;
-(void)setValueLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)valueLabels;
@end

