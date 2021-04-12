/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domainIdentifier;
-(NSString *)providerIdentifier;
-(NSArray *)items;
-(NSString *)actionIdentifier;

@end

