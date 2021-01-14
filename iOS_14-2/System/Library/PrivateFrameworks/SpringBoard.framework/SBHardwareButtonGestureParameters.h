/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface SBHardwareButtonGestureParameters : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	long long _maximumPressCount;
	double _longPressTimeInterval;
	double _multiplePressTimeInterval;

}

@property (nonatomic,readonly) long long maximumPressCount;                   //@synthesize maximumPressCount=_maximumPressCount - In the implementation block
@property (nonatomic,readonly) double longPressTimeInterval;                  //@synthesize longPressTimeInterval=_longPressTimeInterval - In the implementation block
@property (nonatomic,readonly) double multiplePressTimeInterval;              //@synthesize multiplePressTimeInterval=_multiplePressTimeInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)maximumPressCount;
-(double)multiplePressTimeInterval;
-(NSString *)description;
-(double)longPressTimeInterval;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

