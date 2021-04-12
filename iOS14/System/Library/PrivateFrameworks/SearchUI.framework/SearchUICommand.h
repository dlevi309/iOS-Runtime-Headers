/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class SearchUICommandEnvironment, SearchUIRowModel;

@interface SearchUICommand : NSObject {

	SearchUICommandEnvironment* _commandEnvironment;
	SearchUIRowModel* _rowModel;

}

@property (nonatomic,retain) SearchUICommandEnvironment * commandEnvironment;              //@synthesize commandEnvironment=_commandEnvironment - In the implementation block
@property (nonatomic,retain) SearchUIRowModel * rowModel;                                  //@synthesize rowModel=_rowModel - In the implementation block
+(id)tapCommandForRowModel:(id)arg1 environment:(id)arg2 ;
+(BOOL)supportsRowModel:(id)arg1 environment:(id)arg2 ;
+(id)peekCommandForRowModel:(id)arg1 environment:(id)arg2 ;
+(id)mainRowModelForRowModel:(id)arg1 ;
+(Class)supportedCommandClassForClasses:(id)arg1 rowModel:(id)arg2 environment:(id)arg3 ;
-(SearchUICommandEnvironment *)commandEnvironment;
-(SearchUIRowModel *)rowModel;
-(id)resultEngagementFeedback;
-(id)cardSectionEngagementFeedback;
-(BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg1 performOpenIfSo:(BOOL)arg2 ;
-(void)setRowModel:(SearchUIRowModel *)arg1 ;
-(void)sendCardFeedback;
-(void)sendViewControllerFeedback;
-(id)initWithRowModel:(id)arg1 environment:(id)arg2 ;
-(void)setCommandEnvironment:(SearchUICommandEnvironment *)arg1 ;
-(id)storeViewController;
-(void)sendResultFeedback;
-(id)generateCardViewControllerForPeek:(BOOL)arg1 ;
-(unsigned long long)destination;
@end

