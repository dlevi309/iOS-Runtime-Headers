/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary;

@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding> {

	BOOL _wantsThumbnailItemData;
	BOOL _wantsAttachmentURLItemData;
	BOOL _isAirDropActivity;
	BOOL _activitySupportsPromiseURLs;
	BOOL _sourceAppIsManaged;
	Class _classForPreparingExtensionItemData;
	NSUUID* _activityUUID;
	NSString* _activityType;
	long long _activityCategory;
	long long _maxPreviews;
	NSString* _extensionIdentifier;
	NSDictionary* _activitySpecificMetadata;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSUUID * activityUUID;                                   //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSString * activityType;                                 //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                    //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic) NSString * extensionIdentifier;                          //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isAirDropActivity;                                  //@synthesize isAirDropActivity=_isAirDropActivity - In the implementation block
@property (assign,nonatomic) long long maxPreviews;                                   //@synthesize maxPreviews=_maxPreviews - In the implementation block
@property (assign,nonatomic) long long activityCategory;                              //@synthesize activityCategory=_activityCategory - In the implementation block
@property (assign,nonatomic) BOOL wantsThumbnailItemData;                             //@synthesize wantsThumbnailItemData=_wantsThumbnailItemData - In the implementation block
@property (assign,nonatomic) BOOL wantsAttachmentURLItemData;                         //@synthesize wantsAttachmentURLItemData=_wantsAttachmentURLItemData - In the implementation block
@property (assign,nonatomic) BOOL activitySupportsPromiseURLs;                        //@synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs - In the implementation block
@property (nonatomic,retain) NSDictionary * activitySpecificMetadata;                 //@synthesize activitySpecificMetadata=_activitySpecificMetadata - In the implementation block
@property (assign,nonatomic) BOOL sourceAppIsManaged;                                 //@synthesize sourceAppIsManaged=_sourceAppIsManaged - In the implementation block
@property (nonatomic,readonly) Class classForPreparingExtensionItemData;              //@synthesize classForPreparingExtensionItemData=_classForPreparingExtensionItemData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestForActivity:(id)arg1 activityType:(id)arg2 ;
+(id)requestForActivity:(id)arg1 activityType:(id)arg2 activitySpecificMetadata:(id)arg3 ;
+(id)requestForActivity:(id)arg1 activityType:(id)arg2 sourceAppIsManaged:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activityType;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setActivityUUID:(NSUUID *)arg1 ;
-(NSUUID *)activityUUID;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setActivityCategory:(long long)arg1 ;
-(long long)activityCategory;
-(Class)classForPreparingExtensionItemData;
-(long long)maxPreviews;
-(void)setMaxPreviews:(long long)arg1 ;
-(NSDictionary *)activitySpecificMetadata;
-(BOOL)sourceAppIsManaged;
-(BOOL)isAirDropActivity;
-(BOOL)wantsThumbnailItemData;
-(BOOL)wantsAttachmentURLItemData;
-(BOOL)activitySupportsPromiseURLs;
-(void)setSourceAppIsManaged:(BOOL)arg1 ;
-(id)_initWithClassForPreparingExtensionItemData:(Class)arg1 ;
-(void)setIsAirDropActivity:(BOOL)arg1 ;
-(void)setWantsThumbnailItemData:(BOOL)arg1 ;
-(void)setWantsAttachmentURLItemData:(BOOL)arg1 ;
-(void)setActivitySupportsPromiseURLs:(BOOL)arg1 ;
-(void)setActivitySpecificMetadata:(NSDictionary *)arg1 ;
@end

