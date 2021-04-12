/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString, NSArray;

@interface SFContactAutoFillValue : NSObject {

	BOOL _selected;
	NSString* _label;
	NSString* _displayValue;
	NSArray* _matches;

}

@property (assign,nonatomic) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                     //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayValue;              //@synthesize displayValue=_displayValue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * matches;                    //@synthesize matches=_matches - In the implementation block
-(NSString *)label;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(NSString *)displayValue;
-(NSArray *)matches;
-(id)initWithMatches:(id)arg1 displayValue:(id)arg2 label:(id)arg3 ;
@end

