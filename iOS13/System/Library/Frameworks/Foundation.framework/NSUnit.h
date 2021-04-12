/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbol;
-(Class)_effectiveUnitClass;
-(id)initWithSymbol:(id)arg1 ;
@end

