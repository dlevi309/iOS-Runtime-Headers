/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCUserVectorProvider.h>

@class NSURL, FCPersonalizationTreatment, NSString;

@interface FCUserVector : NSObject <FCUserVectorProvider> {

	NSURL* _whitelistURL;
	NSURL* _modelURL;
	FCPersonalizationTreatment* _personalizationTreatment;

}

@property (nonatomic,retain) NSURL * whitelistURL;                                               //@synthesize whitelistURL=_whitelistURL - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                                   //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) FCPersonalizationTreatment * personalizationTreatment;              //@synthesize personalizationTreatment=_personalizationTreatment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)modelURL;
-(id)init;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(NSURL *)whitelistURL;
-(id)findVector:(id)arg1 closestToBins:(id)arg2 ;
-(id)initWithWhitelistURL:(id)arg1 modelURL:(id)arg2 personalizationTreatment:(id)arg3 ;
-(id)computePersonalizationVectorWithBaselineAggregate:(id)arg1 allAggregates:(id)arg2 ;
-(void)setWhitelistURL:(NSURL *)arg1 ;
-(void)setPersonalizationTreatment:(FCPersonalizationTreatment *)arg1 ;
@end

