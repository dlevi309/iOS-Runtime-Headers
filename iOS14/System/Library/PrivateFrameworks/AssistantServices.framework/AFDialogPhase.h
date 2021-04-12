/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFDialogPhase : NSObject <NSSecureCoding> {

	long long _type;

}

@property (getter=_type,nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
@property (getter=isExpository,nonatomic,readonly) BOOL expository; 
@property (getter=isConfirmationDialogPhase,nonatomic,readonly) BOOL confirmationDialogPhase; 
@property (getter=isReflectionDialogPhase,nonatomic,readonly) BOOL reflectionDialogPhase; 
@property (getter=isClarificationDialogPhase,nonatomic,readonly) BOOL clarificationDialogPhase; 
@property (getter=isConfirmedDialogPhase,nonatomic,readonly) BOOL confirmedDialogPhase; 
@property (getter=isCancelledDialogPhase,nonatomic,readonly) BOOL cancelledDialogPhase; 
@property (getter=isUserRequestDialogPhase,nonatomic,readonly) BOOL userRequestDialogPhase; 
@property (getter=isErrorDialogPhase,nonatomic,readonly) BOOL errorDialogPhase; 
@property (getter=isCompletionDialogPhase,nonatomic,readonly) BOOL completionDialogPhase; 
@property (getter=isSummaryDialogPhase,nonatomic,readonly) BOOL summaryDialogPhase; 
@property (nonatomic,readonly) NSString * aceDialogPhaseValue; 
+(BOOL)supportsSecureCoding;
+(id)reflectionDialogPhase;
+(id)dialogPhaseForAceDialogPhase:(id)arg1 ;
+(id)userRequestDialogPhase;
+(id)acknowledgementDialogPhase;
+(id)statusDialogPhase;
+(id)clarificationDialogPhase;
+(id)summaryDialogPhase;
+(id)confirmationDialogPhase;
+(id)errorDialogPhase;
+(id)confirmedDialogPhase;
+(id)cancelledDialogPhase;
+(id)_dialogPhaseWithType:(long long)arg1 ;
+(id)completionDialogPhase;
-(long long)_type;
-(id)_initWithType:(long long)arg1 ;
-(BOOL)isTemporary;
-(BOOL)isSummaryDialogPhase;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)aceDialogPhaseValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToDialogPhase:(id)arg1 ;
-(BOOL)replacesPreviousSnippetContents;
-(BOOL)isReflectionDialogPhase;
-(BOOL)isCancelledDialogPhase;
-(BOOL)isErrorDialogPhase;
-(BOOL)isCompletionDialogPhase;
-(BOOL)isPossiblyPartOfMultiTurnRequest;
-(BOOL)isConfirmedDialogPhase;
-(BOOL)isExpository;
-(BOOL)isConfirmationDialogPhase;
-(BOOL)isClarificationDialogPhase;
-(BOOL)isUserRequestDialogPhase;
@end

