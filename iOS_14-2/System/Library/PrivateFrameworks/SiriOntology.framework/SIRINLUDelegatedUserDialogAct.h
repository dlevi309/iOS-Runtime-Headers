/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class NSString;

@interface SIRINLUDelegatedUserDialogAct : NSObject <SIRINLUUserDialogAct> {

	int _asrHypothesisIndex;
	NSString* _rewrittenUtterance;
	NSString* _externalParserId;

}

@property (assign) int asrHypothesisIndex;                               //@synthesize asrHypothesisIndex=_asrHypothesisIndex - In the implementation block
@property (nonatomic,retain) NSString * rewrittenUtterance;              //@synthesize rewrittenUtterance=_rewrittenUtterance - In the implementation block
@property (nonatomic,retain) NSString * externalParserId;                //@synthesize externalParserId=_externalParserId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)rewrittenUtterance;
-(NSString *)externalParserId;
-(int)asrHypothesisIndex;
-(id)initWithAsrHypothesisIndex:(int)arg1 rewrittenUtterace:(id)arg2 externalParserId:(id)arg3 ;
-(void)setAsrHypothesisIndex:(int)arg1 ;
-(void)setRewrittenUtterance:(NSString *)arg1 ;
-(void)setExternalParserId:(NSString *)arg1 ;
@end

