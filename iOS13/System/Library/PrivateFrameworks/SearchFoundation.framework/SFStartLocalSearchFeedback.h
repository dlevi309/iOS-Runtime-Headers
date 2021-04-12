/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback {

	unsigned long long _indexType;

}

@property (assign,nonatomic) unsigned long long indexType;              //@synthesize indexType=_indexType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)indexType;
-(void)setIndexType:(unsigned long long)arg1 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4 ;
@end

