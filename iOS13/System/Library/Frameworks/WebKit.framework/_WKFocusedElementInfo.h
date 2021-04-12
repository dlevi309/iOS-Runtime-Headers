/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

@class NSString;


@protocol _WKFocusedElementInfo <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * placeholder; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (getter=isUserInitiated,nonatomic,readonly) BOOL userInitiated; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@required
-(long long)type;
-(NSString *)value;
-(NSString *)label;
-(NSString *)placeholder;
-(BOOL)isUserInitiated;
-(NSObject*<NSSecureCoding>)userObject;

@end

