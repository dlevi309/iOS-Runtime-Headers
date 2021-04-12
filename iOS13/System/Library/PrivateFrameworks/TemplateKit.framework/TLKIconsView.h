/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKIconsView : TLKStackView {

	NSMutableArray* _imageViews;
	unsigned long long _prominence;

}

@property (nonatomic,retain) NSMutableArray * imageViews;                //@synthesize imageViews=_imageViews - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;              //@synthesize prominence=_prominence - In the implementation block
-(id)init;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
-(unsigned long long)prominence;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)updateIcons:(id)arg1 ;
@end

