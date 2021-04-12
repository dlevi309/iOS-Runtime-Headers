/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)value;
-(unsigned long long)valueType;
-(id)initWithTarget:(id)arg1 block:(/*^block*/id)arg2 ;
@end

