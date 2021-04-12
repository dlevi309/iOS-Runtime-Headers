/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCMultiStepFetchOperationStep : NSObject {

	BOOL _isCritical;
	SEL _fetchSelector;

}

@property (assign,nonatomic) SEL fetchSelector;              //@synthesize fetchSelector=_fetchSelector - In the implementation block
@property (assign,nonatomic) BOOL isCritical;                //@synthesize isCritical=_isCritical - In the implementation block
-(BOOL)isCritical;
-(void)setFetchSelector:(SEL)arg1 ;
-(void)setIsCritical:(BOOL)arg1 ;
-(SEL)fetchSelector;
@end

