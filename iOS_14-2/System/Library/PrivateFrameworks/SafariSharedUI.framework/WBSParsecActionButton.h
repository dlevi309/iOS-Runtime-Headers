/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSArray, WBSParsecImageRepresentation, NSURL;

@interface WBSParsecActionButton : WBSParsecModel {

	BOOL _forStreamingResult;
	BOOL _overlay;
	NSString* _type;
	NSString* _label;
	NSString* _labelAlignment;
	NSString* _itunesLabel;
	NSString* _offerType;
	NSString* _completion;
	NSString* _itunesCompletion;
	NSString* _mediaKind;
	NSArray* _itunesContentIdentifiers;
	WBSParsecImageRepresentation* _baseIcon;
	WBSParsecImageRepresentation* _icon;
	NSString* _punchoutAppName;
	NSString* _punchoutAppBundleIdentifier;
	NSURL* _punchoutURL;

}

@property (nonatomic,copy,readonly) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * labelAlignment;                                     //@synthesize labelAlignment=_labelAlignment - In the implementation block
@property (nonatomic,copy,readonly) NSString * itunesLabel;                                        //@synthesize itunesLabel=_itunesLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * offerType;                                          //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,copy,readonly) NSString * completion;                                         //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSString * itunesCompletion;                                   //@synthesize itunesCompletion=_itunesCompletion - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKind;                                          //@synthesize mediaKind=_mediaKind - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itunesContentIdentifiers;                            //@synthesize itunesContentIdentifiers=_itunesContentIdentifiers - In the implementation block
@property (getter=isForStreamingResult,nonatomic,readonly) BOOL forStreamingResult;                //@synthesize forStreamingResult=_forStreamingResult - In the implementation block
@property (getter=isForAppleMusicResult,nonatomic,readonly) BOOL forAppleMusicResult; 
@property (getter=isOverlay,nonatomic,readonly) BOOL overlay;                                      //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * baseIcon;                            //@synthesize baseIcon=_baseIcon - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * icon;                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutAppName;                                    //@synthesize punchoutAppName=_punchoutAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutAppBundleIdentifier;                        //@synthesize punchoutAppBundleIdentifier=_punchoutAppBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * punchoutURL;                                                //@synthesize punchoutURL=_punchoutURL - In the implementation block
+(id)schema;
-(NSString *)mediaKind;
-(WBSParsecImageRepresentation *)icon;
-(NSString *)completion;
-(BOOL)isOverlay;
-(NSString *)type;
-(WBSParsecImageRepresentation *)baseIcon;
-(NSString *)offerType;
-(NSString *)label;
-(NSURL *)punchoutURL;
-(id)initWithDictionary:(id)arg1 mediaKind:(id)arg2 ;
-(BOOL)isForAppleMusicResult;
-(NSString *)labelAlignment;
-(NSString *)itunesLabel;
-(NSString *)itunesCompletion;
-(NSArray *)itunesContentIdentifiers;
-(BOOL)isForStreamingResult;
-(NSString *)punchoutAppName;
-(NSString *)punchoutAppBundleIdentifier;
@end

