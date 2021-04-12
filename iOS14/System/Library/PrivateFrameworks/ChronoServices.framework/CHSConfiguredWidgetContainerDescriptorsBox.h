/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CHSConfiguredWidgetContainerDescriptorsBox : NSObject <NSSecureCoding> {

	NSArray* _descriptors;

}

@property (nonatomic,copy,readonly) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)descriptors;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDescriptors:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

