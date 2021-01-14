/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface INUIInterfaceSection : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _interactiveBehavior;
	NSSet* _parameters;

}

@property (nonatomic,readonly) unsigned long long interactiveBehavior;              //@synthesize interactiveBehavior=_interactiveBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSSet * parameters;                             //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2 ;
-(unsigned long long)interactiveBehavior;
@end

