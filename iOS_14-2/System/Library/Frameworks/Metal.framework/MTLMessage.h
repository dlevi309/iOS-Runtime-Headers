/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@class NSString;

@interface MTLMessage : NSObject {

	unsigned long long _type;
	NSString* _string;

}

@property (readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (retain,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
-(id)init:(unsigned long long)arg1 message:(id)arg2 ;
-(unsigned long long)type;
-(NSString *)string;
-(void)dealloc;
@end

