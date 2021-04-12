/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class TUMetadataCache;

@interface TUMetadataClientController : NSObject {

	TUMetadataCache* _metadataCache;

}

@property (nonatomic,retain) TUMetadataCache * metadataCache;              //@synthesize metadataCache=_metadataCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)updateMetadataForRecentCalls:(id)arg1 ;
-(TUMetadataCache *)metadataCache;
-(id)_metadataDestinationIdForSearchItem:(id)arg1 ;
-(id)suggestionForDestinationID:(id)arg1 ;
-(id)locationForDestinationID:(id)arg1 ;
-(id)directoryLabelForDestinationID:(id)arg1 ;
-(void)updateMetadataForDestinationID:(id)arg1 ;
-(id)suggestionForSearchItem:(id)arg1 ;
-(id)locationForSearchItem:(id)arg1 ;
-(id)directoryLabelForSearchItem:(id)arg1 ;
-(void)updateMetadataForCall:(id)arg1 ;
-(void)setMetadataCache:(TUMetadataCache *)arg1 ;
@end

