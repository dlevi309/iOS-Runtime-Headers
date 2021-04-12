/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface INUIExtensionViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _parameters;
	unsigned long long _interactiveBehavior;
	unsigned long long _hostedViewContext;

}

@property (nonatomic,copy,readonly) NSSet * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned long long interactiveBehavior;              //@synthesize interactiveBehavior=_interactiveBehavior - In the implementation block
@property (nonatomic,readonly) unsigned long long hostedViewContext;                //@synthesize hostedViewContext=_hostedViewContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)interactiveBehavior;
-(id)initWithParameters:(id)arg1 interactiveBehavior:(unsigned long long)arg2 hostedViewContext:(unsigned long long)arg3 ;
-(unsigned long long)hostedViewContext;
@end

