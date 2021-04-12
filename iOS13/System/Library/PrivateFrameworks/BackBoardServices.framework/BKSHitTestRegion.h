/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BKSHitTestRegion : NSObject <NSSecureCoding> {

	CGRect _rect;
	CGRect _exclusiveTouchNormalizedSubRect;
	CGRect _exclusiveTouchNormalizedSubRectInReferenceSpace;

}

@property (getter=_exclusiveTouchNormalizedSubRectInReferenceSpace,nonatomic,readonly) CGRect exclusiveTouchNormalizedSubRectInReferenceSpace;              //@synthesize exclusiveTouchNormalizedSubRectInReferenceSpace=_exclusiveTouchNormalizedSubRectInReferenceSpace - In the implementation block
@property (nonatomic,readonly) CGRect rect;                                                                                                                 //@synthesize rect=_rect - In the implementation block
@property (assign,nonatomic) CGRect exclusiveTouchNormalizedSubRect;                                                                                        //@synthesize exclusiveTouchNormalizedSubRect=_exclusiveTouchNormalizedSubRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(CGRect)rect;
-(CGRect)_exclusiveTouchNormalizedSubRectInReferenceSpace;
-(id)initWithRect:(CGRect)arg1 exclusiveTouchSubRect:(CGRect)arg2 ;
-(id)_initWithRect:(CGRect)arg1 exclusiveTouchNormalizedSubRect:(CGRect)arg2 ;
-(void)setExclusiveTouchNormalizedSubRect:(CGRect)arg1 ;
-(CGRect)exclusiveTouchNormalizedSubRect;
@end

