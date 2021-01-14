/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying> {

	RERelevanceProvider* _provider;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) RERelevanceProvider * provider; 
@property (nonatomic,readonly) BOOL allProviders; 
@property (nonatomic,copy) id completion;                                   //@synthesize completion=_completion - In the implementation block
+(id)immediateUpdateForProvider:(id)arg1 ;
+(id)immediateUpdateForAllProviders;
+(id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2 ;
+(id)scheduledUpdateForAllProvidersAtDate:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(RERelevanceProvider *)provider;
-(id)completion;
-(unsigned long long)hash;
-(BOOL)allProviders;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

