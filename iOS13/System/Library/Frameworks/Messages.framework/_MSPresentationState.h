/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MSPresentationState : NSObject <NSSecureCoding> {

	unsigned long long _presentationStyle;
	unsigned long long _presentationContext;

}

@property (assign,nonatomic) unsigned long long presentationStyle;                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isRunningInCameraContext;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(unsigned long long)presentationStyle;
-(unsigned long long)presentationContext;
@end

