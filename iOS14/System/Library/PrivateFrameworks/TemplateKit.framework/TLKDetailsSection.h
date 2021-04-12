/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDetails:(NSArray *)arg1 ;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(NSArray *)details;
-(TLKMultilineText *)title;
@end

