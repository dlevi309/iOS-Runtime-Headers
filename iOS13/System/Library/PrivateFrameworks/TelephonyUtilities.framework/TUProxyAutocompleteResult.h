/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUSearchResult.h>

@class CNAutocompleteResult, NSString, CNContact, NSArray;

@interface TUProxyAutocompleteResult : NSObject <TUSearchResult> {

	CNAutocompleteResult* _autocompleteResult;

}

@property (nonatomic,retain) CNAutocompleteResult * autocompleteResult;              //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
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
-(id)init;
-(NSString *)displayName;
-(NSString *)isoCountryCode;
-(NSArray *)handles;
-(CNAutocompleteResult *)autocompleteResult;
-(void)setAutocompleteResult:(CNAutocompleteResult *)arg1 ;
-(NSString *)callerId;
-(CNContact *)backingContact;
-(long long)mostRecentCallType;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(NSString *)backingContactIdentifier;
-(BOOL)mostRecentCallWasMissed;
-(NSArray *)idsCanonicalDestinations;
-(id)initWithAutocompleteResult:(id)arg1 ;
@end

