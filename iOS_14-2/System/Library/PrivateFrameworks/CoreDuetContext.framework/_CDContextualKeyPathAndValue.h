/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CDContextualKeyPath, _CDContextValue;

@interface _CDContextualKeyPathAndValue : NSObject <NSSecureCoding> {

	_CDContextualKeyPath* _keyPath;
	_CDContextValue* _value;

}

@property (nonatomic,retain) _CDContextualKeyPath * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) _CDContextValue * value;                     //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithKeyPath:(id)arg1 andValue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(_CDContextValue *)arg1 ;
-(void)setKeyPath:(_CDContextualKeyPath *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_CDContextualKeyPath *)keyPath;
-(_CDContextValue *)value;
@end

