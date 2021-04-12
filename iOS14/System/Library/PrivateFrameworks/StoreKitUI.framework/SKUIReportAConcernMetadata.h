/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSURL, SKUIReportAConcernReason, NSString;

@interface SKUIReportAConcernMetadata : NSObject {

	NSURL* _reportConcernURL;
	long long _itemIdentifier;
	SKUIReportAConcernReason* _selectedReason;
	NSString* _details;

}

@property (nonatomic,copy) NSURL * reportConcernURL;                                 //@synthesize reportConcernURL=_reportConcernURL - In the implementation block
@property (assign,nonatomic) long long itemIdentifier;                               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) SKUIReportAConcernReason * selectedReason;              //@synthesize selectedReason=_selectedReason - In the implementation block
@property (nonatomic,copy) NSString * details;                                       //@synthesize details=_details - In the implementation block
-(void)setDetails:(NSString *)arg1 ;
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(NSString *)details;
-(NSURL *)reportConcernURL;
-(void)setReportConcernURL:(NSURL *)arg1 ;
-(SKUIReportAConcernReason *)selectedReason;
-(void)setSelectedReason:(SKUIReportAConcernReason *)arg1 ;
@end

