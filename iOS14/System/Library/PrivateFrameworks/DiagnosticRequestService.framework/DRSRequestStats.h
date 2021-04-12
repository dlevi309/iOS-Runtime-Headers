/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface DRSRequestStats : NSObject {

	NSString* _descriptionString;
	NSMutableArray* __requests;
	NSMutableDictionary* __childStats;

}

@property (nonatomic,readonly) NSMutableArray * _requests;                     //@synthesize _requests=__requests - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _childStats;              //@synthesize _childStats=__childStats - In the implementation block
@property (nonatomic,readonly) NSArray * requests; 
@property (nonatomic,readonly) unsigned long long requestCount; 
@property (nonatomic,readonly) unsigned long long logSizeBytes; 
@property (nonatomic,readonly) NSString * descriptionString;                   //@synthesize descriptionString=_descriptionString - In the implementation block
@property (nonatomic,readonly) NSDictionary * childStats; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
+(id)descriptionStringForChildStats:(id)arg1 ;
-(NSMutableArray *)_requests;
-(id)debugDescription;
-(NSArray *)requests;
-(unsigned long long)requestCount;
-(NSString *)descriptionString;
-(BOOL)addRequest:(id)arg1 ;
-(NSMutableDictionary *)_childStats;
-(NSDictionary *)childStats;
-(id)initWithDescriptionString:(id)arg1 ;
-(void)_addChildRequest:(id)arg1 ;
-(unsigned long long)logSizeBytes;
-(id)_debugDescription:(unsigned long long)arg1 ;
@end

