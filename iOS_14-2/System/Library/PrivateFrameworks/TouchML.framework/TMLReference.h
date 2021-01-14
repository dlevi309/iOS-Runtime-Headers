/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLValue.h>

@class NSString;

@interface TMLReference : NSObject <TMLValue> {

	id _target;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referenceForTarget:(id)arg1 ;
+(id)referenceWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)valueType;
-(id)initWithTarget:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)description;
-(id)value;
@end

