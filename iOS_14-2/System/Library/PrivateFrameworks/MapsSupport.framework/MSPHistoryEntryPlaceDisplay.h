/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

