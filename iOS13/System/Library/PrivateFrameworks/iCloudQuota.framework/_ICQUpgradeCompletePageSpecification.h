/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)pageIdentifier;
-(void)setDoneLink:(ICQLink *)arg1 ;
-(BOOL)hasCancelButtonForBack;
-(ICQLink *)doneLink;
@end

