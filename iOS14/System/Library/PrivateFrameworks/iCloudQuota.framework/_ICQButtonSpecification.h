/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class NSDictionary, ICQLink, NSString;

@interface _ICQButtonSpecification : NSObject {

	NSDictionary* _serverDict;
	ICQLink* _buttonLink;
	NSString* _buttonFormat;
	NSString* _textFormat;
	NSString* _linkFormat;
	NSDictionary* _linkForBundleIdentifier;

}

@property (nonatomic,readonly) NSString * buttonFormat;                           //@synthesize buttonFormat=_buttonFormat - In the implementation block
@property (nonatomic,readonly) ICQLink * buttonLink; 
@property (nonatomic,readonly) NSString * textFormat;                             //@synthesize textFormat=_textFormat - In the implementation block
@property (nonatomic,readonly) NSString * linkFormat;                             //@synthesize linkFormat=_linkFormat - In the implementation block
@property (nonatomic,retain) NSDictionary * linkForBundleIdentifier;              //@synthesize linkForBundleIdentifier=_linkForBundleIdentifier - In the implementation block
+(id)buttonSpecificationSampleForLevel:(long long)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(ICQLink *)buttonLink;
-(id)linkForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)linkForBundleIdentifier;
-(NSString *)buttonFormat;
-(NSString *)textFormat;
-(NSString *)linkFormat;
-(void)setLinkForBundleIdentifier:(NSDictionary *)arg1 ;
@end

