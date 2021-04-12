/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VUIAppDocumentInAppBannerEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSString* _targetId;

}

@property (nonatomic,copy) NSString * targetId;              //@synthesize targetId=_targetId - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(id)description;
-(NSString *)targetId;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(id)initWithTargetId:(id)arg1 ;
@end

