/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

@class NSString;


@protocol SKUIObjectInspector <NSObject>
@property (nonatomic,copy) NSString * friendlyName; 
@property (nonatomic,copy) NSString * information; 
@required
-(NSString *)friendlyName;
-(void)setFriendlyName:(id)arg1;
-(void)setInformation:(id)arg1;
-(NSString *)information;
-(void)beginSectionWithFriendlyName:(id)arg1;
-(void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;
-(void)endSection;

@end

