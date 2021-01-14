/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


@class NSString;

@interface MontrealLogIndent : NSObject {

	NSString* _step;
	unsigned long long _factor;
	NSString* _level;

}

@property (readonly) NSString * step;                        //@synthesize step=_step - In the implementation block
@property (readonly) unsigned long long factor;              //@synthesize factor=_factor - In the implementation block
@property (readonly) NSString * level;                       //@synthesize level=_level - In the implementation block
+(id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
+(id)indentWithLevel:(id)arg1 ;
-(unsigned long long)factor;
-(id)description;
-(id)indentByFactor:(unsigned long long)arg1 ;
-(NSString *)level;
-(NSString *)step;
-(id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
@end

