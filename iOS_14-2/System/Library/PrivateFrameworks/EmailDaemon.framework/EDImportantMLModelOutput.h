/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface EDImportantMLModelOutput : NSObject <MLFeatureProvider> {

	long long _important;
	NSDictionary* _importantProbability;

}

@property (assign,nonatomic) long long important;                              //@synthesize important=_important - In the implementation block
@property (nonatomic,retain) NSDictionary * importantProbability;              //@synthesize importantProbability=_importantProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(long long)important;
-(void)setImportant:(long long)arg1 ;
-(id)initWithImportant:(long long)arg1 importantProbability:(id)arg2 ;
-(NSDictionary *)importantProbability;
-(void)setImportantProbability:(NSDictionary *)arg1 ;
@end

