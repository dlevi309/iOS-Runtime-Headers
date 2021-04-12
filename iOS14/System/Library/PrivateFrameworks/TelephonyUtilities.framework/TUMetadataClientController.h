/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class TUMetadataCache;

@interface TUMetadataClientController : NSObject {

	TUMetadataCache* _metadataCache;

}

@property (nonatomic,retain) TUMetadataCache * metadataCache;              //@synthesize metadataCache=_metadataCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)updateMetadataForCall:(id)arg1 ;
-(id)directoryLabelForDestinationID:(id)arg1 ;
-(id)locationForDestinationID:(id)arg1 ;
-(TUMetadataCache *)metadataCache;
-(id)suggestionForSearchItem:(id)arg1 ;
-(void)setMetadataCache:(TUMetadataCache *)arg1 ;
-(id)suggestionForDestinationID:(id)arg1 ;
-(id)directoryLabelForSearchItem:(id)arg1 ;
-(void)updateMetadataForDestinationID:(id)arg1 ;
-(id)locationForSearchItem:(id)arg1 ;
-(void)updateMetadataForRecentCalls:(id)arg1 ;
-(id)_metadataDestinationIdForSearchItem:(id)arg1 ;
@end

