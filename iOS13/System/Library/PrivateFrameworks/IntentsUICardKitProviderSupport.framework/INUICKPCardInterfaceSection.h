/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

#import <IntentsUI/INUIInterfaceSection.h>
#import <libobjc.A.dylib/INUICKPInterfaceSectionModeling.h>

@protocol CRCardSection;
@class NSSet, NSString;

@interface INUICKPCardInterfaceSection : INUIInterfaceSection <INUICKPInterfaceSectionModeling> {

	NSSet* _cardSectionParameters;
	id<CRCardSection> _cardSection;

}

@property (nonatomic,retain) id<CRCardSection> cardSection;                         //@synthesize cardSection=_cardSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long interactiveBehavior; 
@property (nonatomic,copy) NSSet * parameters;                                      //@synthesize cardSectionParameters=_cardSectionParameters - In the implementation block
@property (nonatomic,readonly) BOOL isWildCardSection; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSSet *)parameters;
-(void)setParameters:(NSSet *)arg1 ;
-(id<CRCardSection>)cardSection;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
-(id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2 ;
-(BOOL)isWildCardSection;
@end

