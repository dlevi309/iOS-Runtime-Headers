/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)link;
-(NSArray *)rects;
-(NSRange)range;
-(NSTextAttachment *)attachment;
-(long long)type;

@end

