/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(/*^block*/id)defaultHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)handler;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEncodable;
-(void)setIsEncodable:(BOOL)arg1 ;
-(BOOL)deselectsRowOnSuccess;
@end

