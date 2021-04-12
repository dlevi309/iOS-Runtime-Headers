/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSUnit : NSObject <NSCopying, NSSecureCoding> {

	NSString* _symbol;

}

@property (readonly) Class _effectiveUnitClass; 
@property (copy,readonly) NSString * symbol;                 //@synthesize symbol=_symbol - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)_effectiveUnitClass;
-(id)initWithSymbol:(id)arg1 ;
-(id)description;
-(NSString *)symbol;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

