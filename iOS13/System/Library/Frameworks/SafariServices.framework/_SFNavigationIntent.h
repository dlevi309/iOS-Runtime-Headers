/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSUUID, _WKActivatedElementInfo, WebBookmark, WBSCloudTab, _SFTabStateData, NSURL, NSString, NSArray, NSDictionary;

@interface _SFNavigationIntent : NSObject {

	id _value;
	BOOL _isUnifiedFieldNavigation;
	BOOL _shouldRelateToSourceTab;
	unsigned long long _type;
	long long _policy;
	NSUUID* _sourceTabUUID;
	NSUUID* _sourceWindowUUID;
	_WKActivatedElementInfo* _sourceElementInfo;

}

@property (assign,nonatomic) long long policy;                                            //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) BOOL shouldRelateToSourceTab;                                //@synthesize shouldRelateToSourceTab=_shouldRelateToSourceTab - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) WebBookmark * bookmark; 
@property (nonatomic,readonly) WBSCloudTab * cloudTab; 
@property (nonatomic,readonly) _SFTabStateData * recentlyClosedTabStateData; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,copy,readonly) NSArray * navigationIntents; 
@property (nonatomic,readonly) BOOL opensInNewTab; 
@property (nonatomic,readonly) BOOL opensInNewWindow; 
@property (nonatomic,readonly) BOOL canUseExistingBlankTab; 
@property (nonatomic,readonly) BOOL shouldOrderToForeground; 
@property (nonatomic,copy,readonly) NSDictionary * externalOptions; 
@property (assign,nonatomic) BOOL isUnifiedFieldNavigation;                               //@synthesize isUnifiedFieldNavigation=_isUnifiedFieldNavigation - In the implementation block
@property (nonatomic,retain) NSUUID * sourceTabUUID;                                      //@synthesize sourceTabUUID=_sourceTabUUID - In the implementation block
@property (nonatomic,retain) NSUUID * sourceWindowUUID;                                   //@synthesize sourceWindowUUID=_sourceWindowUUID - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * sourceElementInfo;                 //@synthesize sourceElementInfo=_sourceElementInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacyPreservingDescription; 
+(long long)defaultTabOrder;
-(id)description;
-(unsigned long long)type;
-(NSURL *)URL;
-(NSString *)text;
-(long long)policy;
-(WebBookmark *)bookmark;
-(void)setPolicy:(long long)arg1 ;
-(BOOL)shouldRelateToSourceTab;
-(WBSCloudTab *)cloudTab;
-(_SFTabStateData *)recentlyClosedTabStateData;
-(NSArray *)navigationIntents;
-(BOOL)canUseExistingBlankTab;
-(BOOL)opensInNewWindow;
-(BOOL)opensInNewTab;
-(NSString *)privacyPreservingDescription;
-(id)_initWithType:(unsigned long long)arg1 value:(id)arg2 policy:(long long)arg3 ;
-(NSDictionary *)externalOptions;
-(BOOL)shouldOrderToForeground;
-(BOOL)isUnifiedFieldNavigation;
-(void)setIsUnifiedFieldNavigation:(BOOL)arg1 ;
-(NSUUID *)sourceTabUUID;
-(void)setSourceTabUUID:(NSUUID *)arg1 ;
-(NSUUID *)sourceWindowUUID;
-(void)setSourceWindowUUID:(NSUUID *)arg1 ;
-(_WKActivatedElementInfo *)sourceElementInfo;
-(void)setSourceElementInfo:(_WKActivatedElementInfo *)arg1 ;
-(void)setShouldRelateToSourceTab:(BOOL)arg1 ;
@end

