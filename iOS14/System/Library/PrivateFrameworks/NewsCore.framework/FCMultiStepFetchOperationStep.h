/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCMultiStepFetchOperationStep : NSObject {

	BOOL _isCritical;
	SEL _fetchSelector;

}

@property (assign,nonatomic) SEL fetchSelector;              //@synthesize fetchSelector=_fetchSelector - In the implementation block
@property (assign,nonatomic) BOOL isCritical;                //@synthesize isCritical=_isCritical - In the implementation block
-(SEL)fetchSelector;
-(void)setIsCritical:(BOOL)arg1 ;
-(void)setFetchSelector:(SEL)arg1 ;
-(BOOL)isCritical;
@end

