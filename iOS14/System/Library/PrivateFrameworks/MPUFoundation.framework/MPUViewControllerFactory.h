/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUViewControllerFactory.h>

@protocol MPUViewControllerFactory <NSObject>
@required
+(id)viewControllerForIdentifier:(id)arg1;
+(id)dataSourceForViewControllerIdentifier:(id)arg1 withQuery:(id)arg2;
+(id)configurationForViewControllerIdentifier:(id)arg1;
+(void)registerViewControllerIdentifier:(id)arg1 withConfiguration:(id)arg2;
+(id)viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+(id)viewControllerForIdentifier:(id)arg1 withDataSource:(id)arg2;
+(id)dataSourceForViewControllerIdentifier:(id)arg1;
+(void)registerViewControllerIdentifier:(id)arg1 withConfigurationBlock:(/*^block*/id)arg2;

@end

#import <UIKit/UIViewControllerRestoration.h>

@class NSString;

@interface MPUViewControllerFactory : NSObject <MPUViewControllerFactory, UIViewControllerRestoration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)viewControllerForIdentifier:(id)arg1 ;
+(id)dataSourceForViewControllerIdentifier:(id)arg1 withQuery:(id)arg2 ;
+(id)configurationForViewControllerIdentifier:(id)arg1 ;
+(void)registerViewControllerIdentifier:(id)arg1 withConfiguration:(id)arg2 ;
+(id)viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2 ;
+(id)viewControllerForIdentifier:(id)arg1 withDataSource:(id)arg2 ;
+(id)_existingViewControllerWithRestorationIdentifierPath:(id)arg1 ;
+(id)dataSourceForViewControllerIdentifier:(id)arg1 ;
+(void)registerViewControllerIdentifier:(id)arg1 withConfigurationBlock:(/*^block*/id)arg2 ;
+(void)registerViewControllerIdentifiers;
+(id)_allConfigurations;
@end

