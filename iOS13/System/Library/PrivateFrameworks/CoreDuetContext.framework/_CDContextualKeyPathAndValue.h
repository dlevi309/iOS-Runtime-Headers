/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_CDContextValue *)value;
-(_CDContextualKeyPath *)keyPath;
-(void)setValue:(_CDContextValue *)arg1 ;
-(void)setKeyPath:(_CDContextualKeyPath *)arg1 ;
-(id)initWithKeyPath:(id)arg1 andValue:(id)arg2 ;
@end

