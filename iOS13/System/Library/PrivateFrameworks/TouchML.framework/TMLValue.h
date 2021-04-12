/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLValue.h>

@protocol TMLValue <NSObject>
@required
-(id)value;
-(unsigned long long)valueType;

@end


@class NSString;

@interface TMLValue : NSObject <TMLValue> {

	id _value;
	unsigned long long _valueType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(unsigned long long)valueType;
-(id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

