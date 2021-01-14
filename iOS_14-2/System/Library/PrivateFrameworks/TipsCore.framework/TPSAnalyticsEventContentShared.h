/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _collectionID;
	NSString* _shareMethod;

}

@property (nonatomic,retain) NSString * contentID;                 //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,retain) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,retain) NSString * shareMethod;               //@synthesize shareMethod=_shareMethod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)contentID;
-(NSString *)collectionID;
-(void)setContentID:(NSString *)arg1 ;
-(id)_initWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3 ;
-(NSString *)shareMethod;
-(void)setShareMethod:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

