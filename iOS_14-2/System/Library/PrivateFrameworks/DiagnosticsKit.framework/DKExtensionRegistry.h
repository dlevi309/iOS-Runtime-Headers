/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKExtensionRegistry <NSObject>
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
@required
-(void)addExtensionAdapter:(id)arg1;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1;
-(Class)extensionClass;
-(Class)responseObjectClass;

@end

