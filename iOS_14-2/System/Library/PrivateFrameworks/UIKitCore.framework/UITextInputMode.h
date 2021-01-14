/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)primaryLanguage;
-(id)initWithCoder:(id)arg1 ;
@end

