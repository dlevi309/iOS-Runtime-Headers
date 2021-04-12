/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

@class NSString, NSArray;


@protocol FPUIActionControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * providerIdentifier; 
@property (nonatomic,readonly) NSString * actionIdentifier; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSString * domainIdentifier; 
@required
+(id)actionControllerForActionIdentifier:(id)arg1 actionTitle:(id)arg2 items:(id)arg3 providerIdentifier:(id)arg4 domainIdentifier:(id)arg5;
-(NSString *)providerIdentifier;
-(NSString *)domainIdentifier;
-(NSArray *)items;
-(NSString *)actionIdentifier;

@end

