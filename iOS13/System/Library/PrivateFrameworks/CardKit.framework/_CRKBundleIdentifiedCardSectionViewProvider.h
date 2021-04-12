/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRCard> card; 
@property (nonatomic,readonly) NSArray * viewConfigurations; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)providerIdentifier;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(id<CRCard>)card;
-(void)setRealCardSectionViewProvider:(id<CRKCardSectionViewProviding>)arg1 ;
-(BOOL)vetoDisplayOfCardSection:(id)arg1 ;
-(unsigned long long)displayPriorityForCardSection:(id)arg1 ;
-(NSArray *)viewConfigurations;
-(id<CRKCardSectionViewProviding>)realCardSectionViewProvider;
@end

