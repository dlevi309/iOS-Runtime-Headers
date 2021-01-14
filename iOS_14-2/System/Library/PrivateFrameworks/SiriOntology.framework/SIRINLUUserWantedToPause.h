/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class USOSerializedGraph;

@interface SIRINLUUserWantedToPause : NSObject <SIRINLUUserDialogAct> {

	USOSerializedGraph* _reference;

}

@property (nonatomic,retain) USOSerializedGraph * reference;              //@synthesize reference=_reference - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithReference:(id)arg1 ;
-(USOSerializedGraph *)reference;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setReference:(USOSerializedGraph *)arg1 ;
@end

