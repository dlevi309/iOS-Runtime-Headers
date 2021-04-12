/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPEntity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CPPointsOfInterestProviding.h>

@class NSString, NSArray;

@interface CPPointsOfInterestEntity : CPEntity <NSSecureCoding, CPPointsOfInterestProviding> {

	NSString* _title;
	NSArray* _pointsOfInterest;

}

@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * pointsOfInterest;              //@synthesize pointsOfInterest=_pointsOfInterest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)objectForIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSArray *)pointsOfInterest;
-(void)setPointsOfInterest:(NSArray *)arg1 ;
-(id)initWithTitle:(id)arg1 pointsOfInterest:(id)arg2 ;
@end

