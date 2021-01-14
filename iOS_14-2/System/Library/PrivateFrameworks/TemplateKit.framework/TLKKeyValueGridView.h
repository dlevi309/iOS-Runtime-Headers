/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)valueLabels;
-(NSMutableArray *)keyLabels;
-(void)setValueLabels:(NSMutableArray *)arg1 ;
-(void)setKeyLabels:(NSMutableArray *)arg1 ;
-(void)updateWithTuples:(id)arg1 valueColumnIsTrailing:(BOOL)arg2 truncateKey:(BOOL)arg3 ;
@end

