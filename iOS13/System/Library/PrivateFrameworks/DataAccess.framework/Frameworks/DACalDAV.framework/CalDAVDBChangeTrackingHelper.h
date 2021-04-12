/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class NSString, NSMutableDictionary;

@interface CalDAVDBChangeTrackingHelper : NSObject {

	NSString* _clientIdentifier;
	int _initialSequenceNumber;
	NSMutableDictionary* _savedChanges;

}
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)clearUnconsumedAndUnsavedChanges;
-(void)saveChange:(int)arg1 forEntityType:(int)arg2 ;
@end

