/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary, WLKBasicContentMetadata, NSURL, NSString, NSDate;

@interface WLKContinuationMetadataBase : NSObject {

	BOOL _isRental;
	BOOL _isPurchase;
	NSDictionary* _dictionary;
	WLKBasicContentMetadata* _movieOrShowContent;
	NSURL* _contentTVAppDeeplinkURL;
	long long _contextEnum;
	NSString* _context;
	NSString* _localizedContext;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * movieOrShowContent;              //@synthesize movieOrShowContent=_movieOrShowContent - In the implementation block
@property (nonatomic,readonly) NSURL * contentTVAppDeeplinkURL;                           //@synthesize contentTVAppDeeplinkURL=_contentTVAppDeeplinkURL - In the implementation block
@property (nonatomic,readonly) long long contextEnum;                                     //@synthesize contextEnum=_contextEnum - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedContext;                          //@synthesize localizedContext=_localizedContext - In the implementation block
@property (nonatomic,readonly) BOOL isRental;                                             //@synthesize isRental=_isRental - In the implementation block
@property (nonatomic,readonly) BOOL isPurchase;                                           //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
+(void)add:(id)arg1 toCollection:(id)arg2 ;
+(void)remove:(id)arg1 fromCollection:(id)arg2 ;
+(long long)_contextForString:(id)arg1 ;
-(id)init;
-(BOOL)isRental;
-(NSDate *)timestamp;
-(NSString *)context;
-(id)description;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)isPurchase;
-(WLKBasicContentMetadata *)movieOrShowContent;
-(id)_mergingIdentifier;
-(NSURL *)contentTVAppDeeplinkURL;
-(long long)contextEnum;
-(NSString *)localizedContext;
@end

