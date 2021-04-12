/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature {

	NSString* _lengthID;

}

@property (nonatomic,retain) NSString * lengthID;              //@synthesize lengthID=_lengthID - In the implementation block
+(id)shortLengthFeature;
+(id)mediumLengthFeature;
+(id)longLengthFeature;
-(id)init;
-(double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2 ;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
-(id)fr_description;
-(id)initWithLengthIdentifier:(id)arg1 ;
-(void)setLengthID:(NSString *)arg1 ;
-(NSString *)lengthID;
@end

