/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UITextInputMode : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSString * primaryLanguage; 
+(BOOL)supportsSecureCoding;
+(id)currentInputMode;
+(id)activeInputModes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
@end

