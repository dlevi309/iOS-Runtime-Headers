/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

@class NSExtension, NSString;


@protocol DKExtensionAttributes
@property (nonatomic,readonly) NSExtension * extension; 
@property (getter=isHeadless,nonatomic,readonly) BOOL headless; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@required
-(NSString *)bundleIdentifier;
-(BOOL)isHeadless;
-(id)initWithExtension:(id)arg1;
-(NSExtension *)extension;

@end

