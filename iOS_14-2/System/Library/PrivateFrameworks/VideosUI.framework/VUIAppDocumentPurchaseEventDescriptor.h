/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor {

	NSString* _canonicalID;

}

@property (nonatomic,copy) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(id)initWithEventType:(unsigned long long)arg1 ;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
@end

