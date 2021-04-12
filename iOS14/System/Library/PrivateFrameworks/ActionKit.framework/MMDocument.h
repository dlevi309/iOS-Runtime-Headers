/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(void)addElement:(id)arg1 ;
-(id)initWithMarkdown:(id)arg1 ;
-(NSString *)markdown;
@end

