/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/CHQueryDelegate.h>

@protocol PKTitleQueryDelegate;
@class CHTitleQuery, PKDrawing, NSString;

@interface PKTitleQuery : NSObject <CHQueryDelegate> {

	id<PKTitleQueryDelegate> _delegate;
	CHTitleQuery* _titleQuery;
	PKDrawing* _drawing;

}

@property (nonatomic,retain) CHTitleQuery * titleQuery;                             //@synthesize titleQuery=_titleQuery - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                   //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic,__weak) id<PKTitleQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * transcribedTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKTitleQueryDelegate>)delegate;
-(void)start;
-(void)pause;
-(void)setDelegate:(id<PKTitleQueryDelegate>)arg1 ;
-(PKDrawing *)drawing;
-(id)initWithDrawing:(id)arg1 ;
-(void)dealloc;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)queryDidUpdateResult:(id)arg1 ;
-(CHTitleQuery *)titleQuery;
-(NSString *)transcribedTitle;
-(void)setTitleQuery:(CHTitleQuery *)arg1 ;
@end

