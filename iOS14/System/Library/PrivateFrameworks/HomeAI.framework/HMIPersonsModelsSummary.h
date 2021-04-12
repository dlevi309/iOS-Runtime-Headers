/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSSet;

@interface HMIPersonsModelsSummary : HMFObject {

	NSSet* _modelSummaries;
	unsigned long long _homeToExternalEquivalencies;
	unsigned long long _externalToExternalEquivalencies;

}

@property (readonly) NSSet * modelSummaries;                                          //@synthesize modelSummaries=_modelSummaries - In the implementation block
@property (readonly) unsigned long long homeToExternalEquivalencies;                  //@synthesize homeToExternalEquivalencies=_homeToExternalEquivalencies - In the implementation block
@property (readonly) unsigned long long externalToExternalEquivalencies;              //@synthesize externalToExternalEquivalencies=_externalToExternalEquivalencies - In the implementation block
-(NSSet *)modelSummaries;
-(unsigned long long)homeToExternalEquivalencies;
-(unsigned long long)externalToExternalEquivalencies;
-(id)initWithModelSummaries:(id)arg1 homeToExternalEquivalencies:(unsigned long long)arg2 externalToExternalEquivalencies:(unsigned long long)arg3 ;
@end

