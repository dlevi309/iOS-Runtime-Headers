/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@interface SCROCallback : NSObject <NSSecureCoding> {

	int _key;
	id<NSSecureCoding> _object;
	BOOL _isAtomic;

}
+(BOOL)supportsSecureCoding;
-(int)key;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(BOOL)isAtomic;
-(void)postToHandler:(id)arg1 ;
-(void)setIsAtomic:(BOOL)arg1 ;
@end

