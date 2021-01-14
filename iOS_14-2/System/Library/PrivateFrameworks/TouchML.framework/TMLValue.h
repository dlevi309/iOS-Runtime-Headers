/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLValue.h>

@protocol TMLValue <NSObject>
@required
-(unsigned long long)valueType;
-(id)value;

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
-(unsigned long long)valueType;
-(id)value;
-(id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

