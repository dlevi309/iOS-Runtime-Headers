/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface RTStateModelLegacy : NSObject <NSSecureCoding> {

	long long _version;
	NSMutableDictionary* _stateModelLut;

}

@property (assign,nonatomic) long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stateModelLut;              //@synthesize stateModelLut=_stateModelLut - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSMutableDictionary *)stateModelLut;
-(void)setStateModelLut:(NSMutableDictionary *)arg1 ;
@end

