/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextItem.h>

@protocol UICoordinateSpace;
@class NSArray, NSURL, NSTextAttachment, NSString;

@interface _UITextItem : NSObject <UITextItem> {

	id<UICoordinateSpace> _coordinateSpace;
	NSArray* _rects;
	long long _type;
	NSURL* _link;
	NSTextAttachment* _attachment;
	NSRange _range;

}

@property (nonatomic,retain) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,retain) NSArray * rects;                                    //@synthesize rects=_rects - In the implementation block
@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * link;                                       //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSTextAttachment * attachment;                      //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSRange)range;
-(NSTextAttachment *)attachment;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(NSURL *)link;
-(void)setRange:(NSRange)arg1 ;
-(void)setLink:(NSURL *)arg1 ;
-(NSArray *)rects;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(void)setRects:(NSArray *)arg1 ;
@end

