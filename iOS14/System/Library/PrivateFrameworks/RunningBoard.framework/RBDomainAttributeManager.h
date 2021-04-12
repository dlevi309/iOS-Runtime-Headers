/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)captureState;
-(id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)allEntitlements;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2 ;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)initWithDataProvider:(id)arg1 ;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4 ;
-(NSString *)debugDescription;
-(NSString *)stateCaptureTitle;
-(id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3 ;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
@end

