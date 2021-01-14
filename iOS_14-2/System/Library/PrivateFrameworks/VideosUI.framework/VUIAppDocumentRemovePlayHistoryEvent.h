/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)removedCanonicalIDs;
-(id)initWithRemovedCanonicalIDs:(id)arg1 ;
-(void)setRemovedCanonicalIDs:(NSSet *)arg1 ;
@end

