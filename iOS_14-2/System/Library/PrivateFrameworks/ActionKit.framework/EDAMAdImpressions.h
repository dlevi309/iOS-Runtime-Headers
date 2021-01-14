/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMAdImpressions : FATObject {

	NSNumber* _adId;
	NSNumber* _impressionCount;
	NSNumber* _impressionTime;

}

@property (nonatomic,retain) NSNumber * adId;                         //@synthesize adId=_adId - In the implementation block
@property (nonatomic,retain) NSNumber * impressionCount;              //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,retain) NSNumber * impressionTime;               //@synthesize impressionTime=_impressionTime - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)adId;
-(NSNumber *)impressionCount;
-(void)setAdId:(NSNumber *)arg1 ;
-(void)setImpressionCount:(NSNumber *)arg1 ;
-(NSNumber *)impressionTime;
-(void)setImpressionTime:(NSNumber *)arg1 ;
@end

