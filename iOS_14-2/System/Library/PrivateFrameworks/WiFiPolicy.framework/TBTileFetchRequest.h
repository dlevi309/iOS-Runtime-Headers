/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBFetchRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, TBTileFetchRequestDescriptor, NSString;

@interface TBTileFetchRequest : NSObject <TBFetchRequest, NSCopying> {

	BOOL _cacheable;
	unsigned long long _sourcePolicy;
	NSDictionary* userInfo;
	/*^block*/id resultsHandler;
	/*^block*/id preferLocalHandler;
	TBTileFetchRequestDescriptor* _descriptor;

}

@property (nonatomic,retain) TBTileFetchRequestDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) BOOL cacheable;                                         //@synthesize cacheable=_cacheable - In the implementation block
@property (assign,nonatomic) unsigned long long sourcePolicy;                        //@synthesize sourcePolicy=_sourcePolicy - In the implementation block
@property (nonatomic,copy) id resultsHandler; 
@property (nonatomic,copy) id preferLocalHandler; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchRequestWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(BOOL)arg3 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(NSDictionary *)userInfo;
-(TBTileFetchRequestDescriptor *)descriptor;
-(void)setDescriptor:(TBTileFetchRequestDescriptor *)arg1 ;
-(id)resultsHandler;
-(void)setResultsHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCacheable:(BOOL)arg1 ;
-(id)initWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(BOOL)arg3 ;
-(unsigned long long)sourcePolicy;
-(void)setSourcePolicy:(unsigned long long)arg1 ;
-(BOOL)cacheable;
-(id)preferLocalHandler;
-(void)setPreferLocalHandler:(id)arg1 ;
-(void)handlePreferLocalResponse:(id)arg1 ;
-(BOOL)doesLocalResultsSatisfyRequest:(id)arg1 ;
@end

