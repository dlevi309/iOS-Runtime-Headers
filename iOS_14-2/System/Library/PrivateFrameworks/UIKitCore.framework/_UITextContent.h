/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSLayoutManager, NSTextStorage, NSTextContainer;


@protocol _UITextContent <NSObject>
@property (nonatomic,readonly) NSLayoutManager * layoutManager; 
@property (nonatomic,readonly) NSTextStorage * textStorage; 
@property (nonatomic,readonly) NSTextContainer * textContainer; 
@required
-(NSTextContainer *)textContainer;
-(NSLayoutManager *)layoutManager;
-(NSTextStorage *)textStorage;

@end

