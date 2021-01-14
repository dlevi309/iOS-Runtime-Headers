/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VUIAppDocumentUpdateEventDescriptor, NSDictionary;

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying> {

	VUIAppDocumentUpdateEventDescriptor* _descriptor;

}

@property (nonatomic,retain) VUIAppDocumentUpdateEventDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)entitlements;
+(id)utsk;
+(id)purchases;
+(id)appDidBecomeActive;
+(id)favorites;
+(id)restrictions;
+(id)settings;
+(id)accountChanged;
+(id)preferredVideoFormat;
+(id)playActivity;
+(id)removeFromPlayHistory;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)appRefresh;
+(id)locationAuthorizationChanged;
+(id)locationRetrieved;
+(id)iamMessageReceived;
-(NSDictionary *)dictionaryRepresentation;
-(id)init;
-(id)initWithDescriptor:(id)arg1 ;
-(VUIAppDocumentUpdateEventDescriptor *)descriptor;
-(id)description;
-(void)setDescriptor:(VUIAppDocumentUpdateEventDescriptor *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)coalescedEvent:(id)arg1 ;
@end

