/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard, CRKCardSectionViewProviding;
@class NSString, NSArray;

@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {

	NSString* providerIdentifier;
	id<CRCard> card;
	NSArray* viewConfigurations;
	id<CRKCardSectionViewProviding> _realCardSectionViewProvider;

}

@property (nonatomic,copy) NSString * providerIdentifier; 
@property (nonatomic,retain) id<CRKCardSectionViewProviding> realCardSectionViewProvider;              //@synthesize realCardSectionViewProvider=_realCardSectionViewProvider - In the implementation block
@property (nonatomic,readonly) id<CRCard> card; 
@property (nonatomic,readonly) NSArray * viewConfigurations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CRCard>)card;
-(NSString *)providerIdentifier;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(void)setRealCardSectionViewProvider:(id<CRKCardSectionViewProviding>)arg1 ;
-(BOOL)vetoDisplayOfCardSection:(id)arg1 ;
-(unsigned long long)displayPriorityForCardSection:(id)arg1 ;
-(NSArray *)viewConfigurations;
-(id<CRKCardSectionViewProviding>)realCardSectionViewProvider;
@end

