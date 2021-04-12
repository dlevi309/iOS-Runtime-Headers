/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBDomainAttributeManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBDomainAttributeDataProviding;
@class NSDictionary, NSString;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing> {

	NSDictionary* _domainAttributeTemplatesByDomain;
	id<RBDomainAttributeDataProviding> _dataProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)debugDescription;
-(id)captureState;
-(id)initWithDataProvider:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4 ;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2 ;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
-(id)allEntitlements;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3 ;
-(void)_prepareAttributeTemplates;
-(BOOL)_compareTargetBundleProperties:(id)arg1 withTargetProperties:(id)arg2 ;
@end

