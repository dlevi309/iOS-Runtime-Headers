/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSSet* _removedCanonicalIDs;

}

@property (nonatomic,copy) NSSet * removedCanonicalIDs;              //@synthesize removedCanonicalIDs=_removedCanonicalIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(NSSet *)removedCanonicalIDs;
-(id)initWithRemovedCanonicalIDs:(id)arg1 ;
-(void)setRemovedCanonicalIDs:(NSSet *)arg1 ;
@end

