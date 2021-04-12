/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@class NSString, NSArray;

@interface SIRINLUSystemGaveOptions : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	NSArray* _choices;

}

@property (nonatomic,retain) NSArray * choices;                    //@synthesize choices=_choices - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)choices;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
-(id)initWithChoices:(id)arg1 ;
-(void)setChoices:(NSArray *)arg1 ;
@end

