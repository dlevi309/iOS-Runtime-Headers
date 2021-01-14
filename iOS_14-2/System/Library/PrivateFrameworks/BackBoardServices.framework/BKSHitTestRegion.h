/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)rect;
-(CGRect)_exclusiveTouchNormalizedSubRectInReferenceSpace;
-(id)initWithRect:(CGRect)arg1 exclusiveTouchSubRect:(CGRect)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)exclusiveTouchNormalizedSubRect;
-(id)description;
-(void)setExclusiveTouchNormalizedSubRect:(CGRect)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithRect:(CGRect)arg1 exclusiveTouchNormalizedSubRect:(CGRect)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

