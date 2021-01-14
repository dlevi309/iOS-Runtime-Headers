/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class RETaggedFeatureValueArray;

@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface> {

	unsigned long long _hash;
	BOOL _historic;
	RETaggedFeatureValueArray* _values;

}

@property (nonatomic,readonly) RETaggedFeatureValueArray * values;              //@synthesize values=_values - In the implementation block
@property (getter=isHistoric,nonatomic,readonly) BOOL historic;                 //@synthesize historic=_historic - In the implementation block
-(RETaggedFeatureValueArray *)values;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHistoric;
-(id)initWithValues:(id)arg1 isHistoric:(BOOL)arg2 ;
@end

