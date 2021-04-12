/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKObject.h>

@class TLKMultilineText, NSArray;

@interface TLKDetailsSection : TLKObject {

	TLKMultilineText* _title;
	NSArray* _details;

}

@property (nonatomic,retain) TLKMultilineText * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * details;                     //@synthesize details=_details - In the implementation block
-(TLKMultilineText *)title;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
@end

