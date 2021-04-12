/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSMutableArray, NSString, NSArray;

@interface MMDocument : NSObject {

	NSMutableArray* _elements;
	NSString* _markdown;

}

@property (nonatomic,copy) NSArray * elements;                        //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy,readonly) NSString * markdown;              //@synthesize markdown=_markdown - In the implementation block
+(id)documentWithMarkdown:(id)arg1 ;
-(NSArray *)elements;
-(void)addElement:(id)arg1 ;
-(void)setElements:(NSArray *)arg1 ;
-(id)initWithMarkdown:(id)arg1 ;
-(NSString *)markdown;
@end

