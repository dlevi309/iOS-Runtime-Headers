/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSString, NSSet;

@interface HDOAuthScopeSet : NSObject {

	BOOL _canReadAllResources;
	BOOL _shouldSelectivelyIngest;
	NSString* _originalScopeString;
	NSSet* _readableResources;

}

@property (nonatomic,copy,readonly) NSString * originalScopeString;              //@synthesize originalScopeString=_originalScopeString - In the implementation block
@property (nonatomic,copy,readonly) NSSet * readableResources;                   //@synthesize readableResources=_readableResources - In the implementation block
@property (nonatomic,readonly) BOOL canReadAllResources;                         //@synthesize canReadAllResources=_canReadAllResources - In the implementation block
@property (nonatomic,readonly) BOOL shouldSelectivelyIngest;                     //@synthesize shouldSelectivelyIngest=_shouldSelectivelyIngest - In the implementation block
-(BOOL)parseWithError:(id*)arg1 ;
-(id)description;
-(id)initWithScopeString:(id)arg1 ;
-(BOOL)canReadResourceType:(id)arg1 ;
-(NSString *)originalScopeString;
-(NSSet *)readableResources;
-(BOOL)canReadAllResources;
-(BOOL)shouldSelectivelyIngest;
@end

