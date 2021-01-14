/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(BOOL)isAtomic;
-(int)key;
-(id)initWithCoder:(id)arg1 ;
-(void)postToHandler:(id)arg1 ;
-(void)setIsAtomic:(BOOL)arg1 ;
@end

