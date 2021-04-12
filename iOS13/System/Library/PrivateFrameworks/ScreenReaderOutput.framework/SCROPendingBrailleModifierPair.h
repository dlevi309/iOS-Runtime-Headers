/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

