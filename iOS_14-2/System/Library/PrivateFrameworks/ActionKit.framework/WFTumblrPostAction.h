/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class TMAPIClient, WFAppInstalledResource, NSString;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource> {

	TMAPIClient* _client;
	WFAppInstalledResource* _appInstalledResource;

}

@property (nonatomic,readonly) TMAPIClient * client;                                     //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) WFAppInstalledResource * appInstalledResource;              //@synthesize appInstalledResource=_appInstalledResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TMAPIClient *)client;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)inputContentClasses;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(BOOL)inputsMultipleItems;
-(WFAppInstalledResource *)appInstalledResource;
-(void)openFiles:(id)arg1 ;
-(void)openPostWithType:(id)arg1 withParameters:(id)arg2 ;
-(void)updateTagsParameterHidden;
-(void)setAppInstalledResource:(WFAppInstalledResource *)arg1 ;
@end

