/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableOrderedSet, NSArray, NSString;

@interface CNAvatarCacheFingerprintCollector : NSObject <CNChangeHistoryEventVisitor> {

	NSMutableOrderedSet* _fingerprints;

}

@property (nonatomic,copy,readonly) NSArray * fingerprintsOfAffectedContacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(NSArray *)fingerprintsOfAffectedContacts;
@end

