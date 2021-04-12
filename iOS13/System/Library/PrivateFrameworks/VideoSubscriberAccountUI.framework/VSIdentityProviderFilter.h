/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSArray, NSString;

@interface VSIdentityProviderFilter : NSObject {

	NSArray* _allIdentityProviders;
	NSArray* _supportedAccountProviderIDs;
	NSString* _searchQuery;

}

@property (nonatomic,copy) NSArray * allIdentityProviders;                            //@synthesize allIdentityProviders=_allIdentityProviders - In the implementation block
@property (nonatomic,copy) NSArray * supportedAccountProviderIDs;                     //@synthesize supportedAccountProviderIDs=_supportedAccountProviderIDs - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                                    //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filteredIdentityProviders; 
+(id)keyPathsForValuesAffectingFilteredIdentityProviders;
-(id)init;
-(NSString *)searchQuery;
-(void)setSearchQuery:(NSString *)arg1 ;
-(NSArray *)allIdentityProviders;
-(NSArray *)supportedAccountProviderIDs;
-(NSArray *)filteredIdentityProviders;
-(void)setAllIdentityProviders:(NSArray *)arg1 ;
-(void)setSupportedAccountProviderIDs:(NSArray *)arg1 ;
@end

