/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@class NSString, NSArray;

@interface WBUAutoFillDisplayData : NSObject {

	NSString* _label;
	NSArray* _fillMatches;

}

@property (nonatomic,retain) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,readonly) NSString * property; 
@property (nonatomic,copy,readonly) NSArray * fillMatches;              //@synthesize fillMatches=_fillMatches - In the implementation block
-(NSString *)valueString;
-(NSString *)property;
-(NSArray *)fillMatches;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)addressStringForLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 fillMatches:(id)arg2 ;
@end

