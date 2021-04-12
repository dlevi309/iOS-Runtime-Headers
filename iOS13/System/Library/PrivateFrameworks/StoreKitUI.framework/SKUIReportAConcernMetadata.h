/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(NSString *)details;
-(void)setDetails:(NSString *)arg1 ;
-(NSURL *)reportConcernURL;
-(void)setReportConcernURL:(NSURL *)arg1 ;
-(SKUIReportAConcernReason *)selectedReason;
-(void)setSelectedReason:(SKUIReportAConcernReason *)arg1 ;
@end

