/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/

#import <iCloudQuota/_ICQPageSpecification.h>

@class NSString, ICQLink;

@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification {

	NSString* _title;
	NSString* _message;
	ICQLink* _doneLink;

}

@property (nonatomic,retain) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) ICQLink * doneLink;              //@synthesize doneLink=_doneLink - In the implementation block
+(id)upgradeCompletePageSpecificationSampleForLevel:(long long)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(id)pageIdentifier;
-(ICQLink *)doneLink;
-(NSString *)title;
-(void)setDoneLink:(ICQLink *)arg1 ;
-(BOOL)hasCancelButtonForBack;
@end

