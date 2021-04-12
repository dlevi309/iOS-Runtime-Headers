/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)settings;
+(id)restrictions;
+(id)favorites;
+(id)purchases;
+(id)preferredVideoFormat;
+(id)accountChanged;
+(id)appDidBecomeActive;
+(id)playActivity;
+(id)removeFromPlayHistory;
+(id)utsk;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)appRefresh;
+(id)locationAuthorizationChanged;
+(id)locationRetrieved;
+(id)iamMessageReceived;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(VUIAppDocumentUpdateEventDescriptor *)descriptor;
-(void)setDescriptor:(VUIAppDocumentUpdateEventDescriptor *)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(id)coalescedEvent:(id)arg1 ;
@end

