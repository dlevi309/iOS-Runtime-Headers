/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOrderedSetChange.h>

@interface NSConcreteOrderedSetChange : NSOrderedSetChange {

	unsigned long long _changeType;
	unsigned long long _sourceIndex;
	unsigned long long _destinationIndex;
	id _value;

}
-(unsigned long long)changeType;
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)sourceIndex;
-(unsigned long long)destinationIndex;
-(id)value;
-(void)dealloc;
@end

