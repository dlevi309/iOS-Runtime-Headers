/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@class VMUFieldInfo;

@interface VMUFieldValue : NSObject {

	VMUFieldInfo* _field;
	unsigned long long _value;

}

@property (nonatomic,readonly) VMUFieldInfo * field; 
@property (nonatomic,readonly) unsigned long long value; 
-(unsigned long long)value;
-(VMUFieldInfo *)field;
-(id)initWithField:(id)arg1 value:(unsigned long long)arg2 ;
@end

