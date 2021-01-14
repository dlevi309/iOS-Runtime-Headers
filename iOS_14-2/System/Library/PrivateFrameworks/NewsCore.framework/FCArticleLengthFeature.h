/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature {

	NSString* _lengthID;

}

@property (nonatomic,retain) NSString * lengthID;              //@synthesize lengthID=_lengthID - In the implementation block
+(id)longLengthFeature;
+(id)shortLengthFeature;
+(id)mediumLengthFeature;
-(id)init;
-(NSString *)lengthID;
-(double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2 ;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
-(id)fr_description;
-(id)initWithLengthIdentifier:(id)arg1 ;
-(void)setLengthID:(NSString *)arg1 ;
@end

