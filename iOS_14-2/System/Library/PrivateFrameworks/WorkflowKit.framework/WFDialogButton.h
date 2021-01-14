/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	long long _style;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                         //@synthesize style=_style - In the implementation block
+(id)doneButton;
+(id)cancelButton;
+(BOOL)supportsSecureCoding;
+(id)okButton;
+(id)defaultButtonWithTitle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
@end

