/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {

	double _cornerRadius;
	long long _textSizeAdjustment;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) long long textSizeAdjustment;              //@synthesize textSizeAdjustment=_textSizeAdjustment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)init;
-(id)initWithSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(id)initWithSize:(CGSize)arg1 cornerRadius:(double)arg2 textSizeAdjustment:(long long)arg3 ;
-(long long)textSizeAdjustment;
-(CGSize)size;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)cornerRadius;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

