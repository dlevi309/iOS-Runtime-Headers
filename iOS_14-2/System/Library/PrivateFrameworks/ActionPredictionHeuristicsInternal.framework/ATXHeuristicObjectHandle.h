/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ATXHeuristicObjectHandle : NSObject <NSSecureCoding> {

	NSNumber* _deviceHandle;
	NSNumber* _objHandle;
	id _obj;

}

@property (nonatomic,readonly) id obj;              //@synthesize obj=_obj - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)obj;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 wrapping:(id)arg2 ;
@end

