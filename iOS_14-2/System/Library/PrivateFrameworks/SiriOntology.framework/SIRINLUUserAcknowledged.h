/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserAcknowledged : NSObject <SIRINLUUserDialogAct> {

	NSUUID* _systemDialogActId;
	USOSerializedGraph* _reference;

}

@property (nonatomic,retain) NSUUID * systemDialogActId;                  //@synthesize systemDialogActId=_systemDialogActId - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * reference;              //@synthesize reference=_reference - In the implementation block
+(BOOL)supportsSecureCoding;
-(USOSerializedGraph *)reference;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setReference:(USOSerializedGraph *)arg1 ;
-(NSUUID *)systemDialogActId;
-(id)initWithSystemDialogActId:(id)arg1 reference:(id)arg2 ;
-(void)setSystemDialogActId:(NSUUID *)arg1 ;
@end

