/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

@class CRKCardPresentationConfiguration;


@protocol CRKCardPresenting <NSObject>
@property (nonatomic,copy) CRKCardPresentationConfiguration * configuration; 
@property (nonatomic,readonly) id<CRCard> card; 
@required
-(id<CRCard>)card;
-(CRKCardPresentationConfiguration *)configuration;
-(void)setConfiguration:(id)arg1;
-(void)setConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

