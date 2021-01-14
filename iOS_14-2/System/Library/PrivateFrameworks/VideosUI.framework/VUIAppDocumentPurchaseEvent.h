/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

