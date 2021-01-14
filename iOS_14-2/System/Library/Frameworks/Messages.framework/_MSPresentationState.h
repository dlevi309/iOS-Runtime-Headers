/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)presentationStyle;
-(id)init;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(unsigned long long)presentationContext;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

