/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)obj;
-(id)initWithDevice:(id)arg1 wrapping:(id)arg2 ;
@end

