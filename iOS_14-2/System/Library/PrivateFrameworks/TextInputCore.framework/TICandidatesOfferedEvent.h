/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIUserAction.h>

@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction {

	TIAutocorrectionList* _candidates;

}

@property (nonatomic,readonly) TIAutocorrectionList * candidates;              //@synthesize candidates=_candidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIAutocorrectionList *)candidates;
-(id)initWithCandidates:(id)arg1 keyboardState:(id)arg2 ;
@end

