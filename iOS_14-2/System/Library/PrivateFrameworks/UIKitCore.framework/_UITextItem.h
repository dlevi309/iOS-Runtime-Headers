/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)link;
-(NSArray *)rects;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(void)setLink:(NSURL *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(NSRange)range;
-(void)setType:(long long)arg1 ;
-(NSString *)description;
-(NSTextAttachment *)attachment;
-(void)setRects:(NSArray *)arg1 ;
-(long long)type;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
@end

