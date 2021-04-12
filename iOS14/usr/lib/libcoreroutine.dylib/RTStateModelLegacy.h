/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)stateModelLut;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)setStateModelLut:(NSMutableDictionary *)arg1 ;
@end
