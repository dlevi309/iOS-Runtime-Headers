/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

