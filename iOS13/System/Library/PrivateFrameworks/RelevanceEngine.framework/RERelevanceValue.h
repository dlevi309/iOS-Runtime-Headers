/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RETaggedFeatureValueArray *)values;
-(BOOL)isHistoric;
-(id)initWithValues:(id)arg1 isHistoric:(BOOL)arg2 ;
@end

