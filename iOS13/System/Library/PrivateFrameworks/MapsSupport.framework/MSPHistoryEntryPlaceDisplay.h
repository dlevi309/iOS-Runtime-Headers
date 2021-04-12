/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSUUID;


@protocol MSPHistoryEntryPlaceDisplay <MSPHistoryEntry>
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,copy,readonly) NSUUID * supersededSearchStorageIdentifier; 
@required
-(id<GEOMapItem>)geoMapItem;
-(NSUUID *)supersededSearchStorageIdentifier;

@end

