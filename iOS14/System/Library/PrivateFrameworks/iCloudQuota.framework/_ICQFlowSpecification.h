/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class _ICQPageSpecification, NSDictionary, _ICQAlertSpecification;

@interface _ICQFlowSpecification : NSObject {

	_ICQPageSpecification* _startPage;
	NSDictionary* _pagesByIdentifier;
	_ICQAlertSpecification* _startAlert;

}

@property (nonatomic,readonly) _ICQPageSpecification * startPage;              //@synthesize startPage=_startPage - In the implementation block
@property (nonatomic,readonly) NSDictionary * pagesByIdentifier;               //@synthesize pagesByIdentifier=_pagesByIdentifier - In the implementation block
@property (nonatomic,retain) _ICQAlertSpecification * startAlert;              //@synthesize startAlert=_startAlert - In the implementation block
-(_ICQPageSpecification *)startPage;
-(_ICQAlertSpecification *)startAlert;
-(void)setStartAlert:(_ICQAlertSpecification *)arg1 ;
-(id)initWithPages:(id)arg1 ;
-(NSDictionary *)pagesByIdentifier;
@end

