/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSURL, PXTimelineCrop;

@interface PXTimelineEntry : NSObject <NSCopying> {

	unsigned long long _contentType;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _title;
	NSString* _subtitle;
	NSString* _localIdentifier;
	NSString* _assetLocalIdentifier;
	NSURL* _deeplink;
	PXTimelineCrop* _suggestedCrop;
	NSString* _proactiveCriterion;
	double _relevanceScore;
	unsigned long long _rejectReason;

}

@property (nonatomic,retain) NSDate * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double relevanceScore;                        //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (nonatomic,retain) PXTimelineCrop * suggestedCrop;                 //@synthesize suggestedCrop=_suggestedCrop - In the implementation block
@property (assign,nonatomic) unsigned long long rejectReason;                //@synthesize rejectReason=_rejectReason - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;               //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;                   //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * assetLocalIdentifier;              //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * deeplink;                             //@synthesize deeplink=_deeplink - In the implementation block
@property (nonatomic,retain) NSString * proactiveCriterion;                  //@synthesize proactiveCriterion=_proactiveCriterion - In the implementation block
+(id)emptyWidgetURL;
+(id)_descriptionForRejectReason:(unsigned long long)arg1 ;
+(id)_descriptionForTimelineContentType:(unsigned long long)arg1 ;
+(id)placeholderEntry;
+(id)fallbackEntryForSize:(unsigned long long)arg1 ;
-(NSURL *)deeplink;
-(NSString *)localIdentifier;
-(unsigned long long)contentType;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)subtitle;
-(unsigned long long)rejectReason;
-(double)relevanceScore;
-(id)initWithMemory:(id)arg1 andMemoryKeyAsset:(id)arg2 ;
-(id)description;
-(void)setRejectReason:(unsigned long long)arg1 ;
-(id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2 ;
-(id)initWithFeaturedPhoto:(id)arg1 andFeaturedPhotoKeyAsset:(id)arg2 suggestedCrop:(id)arg3 ;
-(id)_initWithTitle:(id)arg1 subtitle:(id)arg2 localIdentifier:(id)arg3 assetLocalIdentifier:(id)arg4 deeplink:(id)arg5 contentType:(unsigned long long)arg6 relevanceScore:(double)arg7 proactiveCriterion:(id)arg8 suggestedCrop:(id)arg9 rejectReason:(unsigned long long)arg10 ;
-(id)_initWithTimelineEntry:(id)arg1 ;
-(NSString *)proactiveCriterion;
-(void)setProactiveCriterion:(NSString *)arg1 ;
-(NSString *)assetLocalIdentifier;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(PXTimelineCrop *)suggestedCrop;
-(void)setSuggestedCrop:(PXTimelineCrop *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTime;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

