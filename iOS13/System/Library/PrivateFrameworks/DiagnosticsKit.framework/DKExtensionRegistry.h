/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

