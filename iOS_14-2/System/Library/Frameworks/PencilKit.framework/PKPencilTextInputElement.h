/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol NSObjectNSCopying;
#import <PencilKit/PencilKit-Structs.h>
@interface PKPencilTextInputElement : NSObject {

	id<NSObject><NSCopying> _identifier;
	CGRect _frame;

}

@property (nonatomic,copy,readonly) id<NSObject><NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                         //@synthesize frame=_frame - In the implementation block
-(CGRect)frame;
-(id)description;
-(id<NSObject><NSCopying>)identifier;
-(id)initWithIdentifier:(id)arg1 frame:(CGRect)arg2 ;
@end

