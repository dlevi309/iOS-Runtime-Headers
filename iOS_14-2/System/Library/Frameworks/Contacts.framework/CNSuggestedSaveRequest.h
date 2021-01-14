/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNSaveRequest.h>

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest : CNSaveRequest {

	NSMutableSet* _mutableConfirmedSuggestions;
	NSMutableSet* _mutableRejectedSuggestions;

}

@property (nonatomic,retain) NSMutableSet * mutableConfirmedSuggestions;              //@synthesize mutableConfirmedSuggestions=_mutableConfirmedSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableRejectedSuggestions;               //@synthesize mutableRejectedSuggestions=_mutableRejectedSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * confirmedSuggestions; 
@property (nonatomic,copy,readonly) NSSet * rejectedSuggestions; 
-(void)rejectSuggestion:(id)arg1 ;
-(void)confirmSuggestion:(id)arg1 ;
-(NSSet *)rejectedSuggestions;
-(id)storeIdentifier;
-(NSSet *)confirmedSuggestions;
-(NSMutableSet *)mutableConfirmedSuggestions;
-(void)setMutableConfirmedSuggestions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableRejectedSuggestions;
-(void)setMutableRejectedSuggestions:(NSMutableSet *)arg1 ;
@end

