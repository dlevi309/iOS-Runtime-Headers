/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

@class CRKCardPresentationConfiguration;


@protocol CRKCardPresenting <NSObject>
@property (nonatomic,copy) CRKCardPresentationConfiguration * configuration; 
@property (nonatomic,readonly) id<CRCard> card; 
@required
-(void)setConfiguration:(id)arg1;
-(CRKCardPresentationConfiguration *)configuration;
-(id<CRCard>)card;
-(void)setConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

