/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
*/

#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard;
@class NSArray, NSString;

@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {

	id<CRCard> _card;
	NSArray* _viewConfigurations;

}

@property (nonatomic,readonly) id<CRCard> card;                                 //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * viewConfigurations;                    //@synthesize viewConfigurations=_viewConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(id<CRCard>)card;
-(NSString *)providerIdentifier;
-(id)initWithCard:(id)arg1 ;
-(NSArray *)viewConfigurations;
@end

