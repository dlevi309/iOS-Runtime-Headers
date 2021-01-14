/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@class NSString, NSArray;

@interface SIRINLUSystemInformed : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	NSArray* _entities;

}

@property (nonatomic,retain) NSArray * entities;                   //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(NSArray *)entities;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEntities:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
@end

