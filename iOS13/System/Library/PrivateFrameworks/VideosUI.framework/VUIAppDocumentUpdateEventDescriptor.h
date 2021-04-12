/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying> {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)entitlements;
+(id)settings;
+(id)restrictions;
+(id)favorites;
+(id)purchases;
+(id)preferredVideoFormat;
+(id)accountChanged;
+(id)appDidBecomeActive;
+(id)playActivity;
+(id)upNext;
+(id)removeFromPlayHistory;
+(id)utsk;
+(id)postPlay;
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
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 ;
@end

