/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
*/

#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard;
@class NSArray, NSString;

@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {

	id<CRCard> _card;
	NSArray* _viewConfigurations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRCard> card;                                 //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * viewConfigurations;                    //@synthesize viewConfigurations=_viewConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(NSString *)providerIdentifier;
-(id<CRCard>)card;
-(id)initWithCard:(id)arg1 ;
-(NSArray *)viewConfigurations;
@end

