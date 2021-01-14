/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/CPEntityUpdateProviding.h>

@protocol CPEntityProviding, CPEntityClientTemplateDelegate, CPSEntityActionDelegate;
@class CPSTemplateEnvironment, CPTemplate, NSString;

@interface CPSEntityResourceProvider : NSObject <CPEntityUpdateProviding> {

	CPSTemplateEnvironment* _templateEnvironment;
	CPTemplate*<CPEntityProviding> _entityTemplate;
	id<CPEntityClientTemplateDelegate> _templateDelegate;
	id<CPSEntityActionDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) CPTemplate*<CPEntityProviding> entityTemplate;                    //@synthesize entityTemplate=_entityTemplate - In the implementation block
@property (assign,nonatomic,__weak) id<CPEntityClientTemplateDelegate> templateDelegate;              //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (nonatomic,__weak,readonly) CPSTemplateEnvironment * templateEnvironment;                   //@synthesize templateEnvironment=_templateEnvironment - In the implementation block
@property (nonatomic,__weak,readonly) id<CPSEntityActionDelegate> actionDelegate;                     //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPSEntityActionDelegate>)actionDelegate;
-(NSString *)description;
-(id<CPEntityClientTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id<CPEntityClientTemplateDelegate>)arg1 ;
-(void)updateEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2 ;
-(CPTemplate*<CPEntityProviding>)entityTemplate;
-(CPSTemplateEnvironment *)templateEnvironment;
-(id)initWithTemplateEnvironment:(id)arg1 entityTemplate:(id)arg2 templateDelegate:(id)arg3 actionDelegate:(id)arg4 ;
-(void)setEntityTemplate:(CPTemplate*<CPEntityProviding>)arg1 ;
@end

