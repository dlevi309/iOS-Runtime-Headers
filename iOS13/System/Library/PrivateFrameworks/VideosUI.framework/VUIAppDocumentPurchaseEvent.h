/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSString* _canonicalID;

}

@property (nonatomic,copy) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(NSString *)canonicalID;
-(id)_purchaseEventDescriptor;
-(id)initWithPurchaseEventDescriptor:(id)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
@end

