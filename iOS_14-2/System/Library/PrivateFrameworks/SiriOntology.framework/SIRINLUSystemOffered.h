/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@protocol SIRINLUUserDialogAct;
@class NSString;

@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	id<SIRINLUUserDialogAct> _offeredAct;

}

@property (nonatomic,retain) id<SIRINLUUserDialogAct> offeredAct;              //@synthesize offeredAct=_offeredAct - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
-(id<SIRINLUUserDialogAct>)offeredAct;
-(id)initWithOfferedAct:(id)arg1 ;
-(void)setOfferedAct:(id<SIRINLUUserDialogAct>)arg1 ;
@end

