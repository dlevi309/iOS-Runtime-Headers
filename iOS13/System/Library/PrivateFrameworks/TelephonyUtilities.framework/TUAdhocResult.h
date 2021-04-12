/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUSearchResult.h>

@class TUSearchController, NSString, CNContact, NSArray;

@interface TUAdhocResult : NSObject <TUSearchResult> {

	TUSearchController* _searchController;
	NSString* _value;

}

@property (nonatomic,retain) NSString * value;                         //@synthesize value=_value - In the implementation block
@property (__weak) TUSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (readonly) NSArray * idsCanonicalDestinations; 
-(id)initWithString:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSString *)isoCountryCode;
-(NSArray *)handles;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(NSString *)callerId;
-(CNContact *)backingContact;
-(long long)mostRecentCallType;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(NSString *)backingContactIdentifier;
-(BOOL)mostRecentCallWasMissed;
-(NSArray *)idsCanonicalDestinations;
@end

