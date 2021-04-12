/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSSet* _addedCanonicalIDs;
	NSSet* _removedCanonicalIDs;

}

@property (nonatomic,copy) NSSet * addedCanonicalIDs;                //@synthesize addedCanonicalIDs=_addedCanonicalIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedCanonicalIDs;              //@synthesize removedCanonicalIDs=_removedCanonicalIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(NSSet *)removedCanonicalIDs;
-(void)setRemovedCanonicalIDs:(NSSet *)arg1 ;
-(id)coalescedEvent:(id)arg1 ;
-(id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 ;
-(id)initWithAddedCanonicalIDs:(id)arg1 removedCanonicalIDs:(id)arg2 ;
-(NSSet *)addedCanonicalIDs;
-(void)setAddedCanonicalIDs:(NSSet *)arg1 ;
@end

