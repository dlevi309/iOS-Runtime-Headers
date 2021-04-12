/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback {

	unsigned long long _indexType;

}

@property (assign,nonatomic) unsigned long long indexType;              //@synthesize indexType=_indexType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)indexType;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 ;
@end

