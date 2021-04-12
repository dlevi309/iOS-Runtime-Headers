/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, NSURL, NSTextAttachment;


@protocol UITextItem <NSObject>
@property (nonatomic,readonly) NSArray * rects; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSURL * link; 
@property (nonatomic,readonly) NSTextAttachment * attachment; 
@required
-(long long)type;
-(NSRange)range;
-(NSTextAttachment *)attachment;
-(NSURL *)link;
-(NSArray *)rects;

@end

