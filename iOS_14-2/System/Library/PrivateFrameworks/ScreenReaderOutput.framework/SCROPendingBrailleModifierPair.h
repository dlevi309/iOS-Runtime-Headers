/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <ScreenReaderOutput/SCROPendingBrailleEdit.h>

@class NSString, NSArray;

@interface SCROPendingBrailleModifierPair : SCROPendingBrailleEdit {

	NSString* _pendingBraille;
	NSArray* _modifiers;

}

@property (nonatomic,readonly) NSString * pendingBraille;              //@synthesize pendingBraille=_pendingBraille - In the implementation block
@property (nonatomic,readonly) NSArray * modifiers;                    //@synthesize modifiers=_modifiers - In the implementation block
-(NSArray *)modifiers;
-(id)initWithPendingBraille:(id)arg1 modifiers:(id)arg2 ;
-(NSString *)pendingBraille;
@end

