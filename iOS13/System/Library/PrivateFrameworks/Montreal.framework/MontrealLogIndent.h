/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)factor;
-(NSString *)level;
-(NSString *)step;
-(id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
-(id)indentByFactor:(unsigned long long)arg1 ;
@end

