/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMapTable;

@interface TIWordSearchController : NSObject {

	NSMapTable* _inputModeToWordSearchMapping;

}

@property (nonatomic,retain) NSMapTable * inputModeToWordSearchMapping;              //@synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping - In the implementation block
+(id)sharedWordSearchController;
-(id)init;
-(void)setWordSearch:(id)arg1 forInputMode:(id)arg2 ;
-(id)wordSearchForInputMode:(id)arg1 ;
-(NSMapTable *)inputModeToWordSearchMapping;
-(void)setInputModeToWordSearchMapping:(NSMapTable *)arg1 ;
@end

