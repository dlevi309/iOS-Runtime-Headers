/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProminence:(unsigned long long)arg1 ;
-(id)init;
-(void)updateIcons:(id)arg1 ;
-(unsigned long long)prominence;
-(NSMutableArray *)imageViews;
-(void)setImageViews:(NSMutableArray *)arg1 ;
@end

