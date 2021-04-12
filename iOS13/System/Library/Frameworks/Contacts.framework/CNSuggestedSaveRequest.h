/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)storeIdentifier;
-(void)confirmSuggestion:(id)arg1 ;
-(void)rejectSuggestion:(id)arg1 ;
-(NSSet *)confirmedSuggestions;
-(NSSet *)rejectedSuggestions;
-(NSMutableSet *)mutableConfirmedSuggestions;
-(void)setMutableConfirmedSuggestions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableRejectedSuggestions;
-(void)setMutableRejectedSuggestions:(NSMutableSet *)arg1 ;
@end

