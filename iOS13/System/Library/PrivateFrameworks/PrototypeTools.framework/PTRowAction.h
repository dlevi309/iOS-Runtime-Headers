/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PTRowAction : NSObject <NSSecureCoding> {

	/*^block*/id _handler;
	BOOL _isEncodable;

}

@property (assign,nonatomic) BOOL isEncodable;              //@synthesize isEncodable=_isEncodable - In the implementation block
@property (nonatomic,readonly) id handler; 
+(BOOL)supportsSecureCoding;
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(/*^block*/id)defaultHandler;
-(BOOL)isEncodable;
-(void)setIsEncodable:(BOOL)arg1 ;
-(BOOL)deselectsRowOnSuccess;
@end

