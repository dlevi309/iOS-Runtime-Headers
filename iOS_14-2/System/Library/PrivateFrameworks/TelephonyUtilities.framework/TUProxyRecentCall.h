/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUSearchResult.h>

@class CHRecentCall, TUSearchController, NSString, CNContact, NSArray;

@interface TUProxyRecentCall : NSObject <TUSearchResult> {

	CHRecentCall* _recentCall;
	TUSearchController* _searchController;

}

@property (nonatomic,retain) CHRecentCall * recentCall;                //@synthesize recentCall=_recentCall - In the implementation block
@property (readonly) NSString * mostRecentCallInfo; 
@property (__weak) TUSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * callerId; 
@property (readonly) CNContact * backingContact; 
@property (readonly) NSString * backingContactId; 
@property (readonly) NSString * backingContactIdentifier; 
@property (readonly) NSString * destinationId; 
@property (readonly) NSString * isoCountryCode; 
@property (readonly) NSArray * handles; 
@property (readonly) long long mostRecentCallType; 
@property (readonly) BOOL mostRecentCallWasMissed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * idsCanonicalDestinations; 
-(NSArray *)handles;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(TUSearchController *)searchController;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(CHRecentCall *)recentCall;
-(id)initWithRecentCall:(id)arg1 ;
-(CNContact *)backingContact;
-(long long)mostRecentCallType;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(NSString *)backingContactIdentifier;
-(BOOL)mostRecentCallWasMissed;
-(NSArray *)idsCanonicalDestinations;
-(NSString *)mostRecentCallInfo;
-(void)setRecentCall:(CHRecentCall *)arg1 ;
-(NSString *)displayName;
@end

