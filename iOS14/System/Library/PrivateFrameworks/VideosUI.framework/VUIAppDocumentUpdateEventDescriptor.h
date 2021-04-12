/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying> {

	BOOL _animated;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL animated;                        //@synthesize animated=_animated - In the implementation block
+(id)entitlements;
+(id)utsk;
+(id)purchases;
+(id)appDidBecomeActive;
+(id)upNext;
+(id)favorites;
+(id)restrictions;
+(id)settings;
+(id)accountChanged;
+(id)postPlay;
+(id)preferredVideoFormat;
+(id)playActivity;
+(id)removeFromPlayHistory;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)appRefresh;
+(id)locationAuthorizationChanged;
+(id)locationRetrieved;
+(id)iamMessageReceived;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 ;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

