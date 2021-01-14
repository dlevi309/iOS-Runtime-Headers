/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class CNContactStore, NSArray, NSMutableArray, NSString;

@interface PPContactNameRecordChangeHistoryAccumulator : NSObject <CNChangeHistoryEventVisitor> {

	CNContactStore* _store;
	NSArray* _keysToFetch;
	NSMutableArray* _records;
	BOOL _truncated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)records;
-(id)initWithStore:(id)arg1 keysToFetch:(id)arg2 ;
-(BOOL)truncated;
-(void)visitAddContactEvent:(id)arg1 ;
-(id)_nameRecordWithContactIdentifier:(id)arg1 changeType:(unsigned char)arg2 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
@end

