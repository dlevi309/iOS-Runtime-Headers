/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSSet* _addedEntityIDs;
	NSSet* _removedEntityIDs;

}

@property (nonatomic,copy) NSSet * addedEntityIDs;                //@synthesize addedEntityIDs=_addedEntityIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedEntityIDs;              //@synthesize removedEntityIDs=_removedEntityIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(id)initWithAddedEntityIDs:(id)arg1 removedEntityIDs:(id)arg2 ;
-(NSSet *)addedEntityIDs;
-(NSSet *)removedEntityIDs;
-(id)initWithAction:(unsigned long long)arg1 entityID:(id)arg2 ;
-(id)coalescedEvent:(id)arg1 ;
-(void)setAddedEntityIDs:(NSSet *)arg1 ;
-(void)setRemovedEntityIDs:(NSSet *)arg1 ;
@end

