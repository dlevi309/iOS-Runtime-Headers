/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, WFImage, ICApp, WFAccessResource;

@interface WFGalleryService : NSObject {

	NSString* _name;
	WFImage* _icon;
	ICApp* _app;
	WFAccessResource* _accessResource;

}

@property (nonatomic,readonly) ICApp * app;                                    //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) WFAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFImage * icon;                                 //@synthesize icon=_icon - In the implementation block
+(id)serviceWithApp:(id)arg1 ;
+(id)serviceWithAccessResource:(id)arg1 ;
+(id)servicesForWorkflow:(id)arg1 ;
-(WFImage *)icon;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(ICApp *)app;
-(BOOL)isEqual:(id)arg1 ;
-(void)loadIconWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFAccessResource *)accessResource;
@end

