/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

@class NSExtension, NSString;


@protocol DKExtensionAttributes
@property (nonatomic,readonly) NSExtension * extension; 
@property (getter=isHeadless,nonatomic,readonly) BOOL headless; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@required
-(NSString *)bundleIdentifier;
-(NSExtension *)extension;
-(id)initWithExtension:(id)arg1;
-(BOOL)isHeadless;

@end

