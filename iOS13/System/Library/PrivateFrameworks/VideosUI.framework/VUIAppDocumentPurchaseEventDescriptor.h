/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor {

	NSString* _canonicalID;

}

@property (nonatomic,copy) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 ;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
@end

