/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@class VMUFieldInfo;

@interface VMUFieldValue : NSObject {

	VMUFieldInfo* _field;
	unsigned long long _value;

}

@property (nonatomic,readonly) VMUFieldInfo * field; 
@property (nonatomic,readonly) unsigned long long value; 
-(VMUFieldInfo *)field;
-(id)initWithField:(id)arg1 value:(unsigned long long)arg2 ;
-(unsigned long long)value;
@end

