/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding> {

	NSString* _clientIdentifier;
	long long _itemState;
	NSString* _representativeTitle;
	NSString* _statusString;
	long long _totalNumberOfItems;
	unsigned long long _transferTypes;

}

@property (nonatomic,copy) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) long long itemState;                           //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,copy) NSString * representativeTitle;                  //@synthesize representativeTitle=_representativeTitle - In the implementation block
@property (nonatomic,copy) NSString * statusString;                         //@synthesize statusString=_statusString - In the implementation block
@property (assign,nonatomic) long long totalNumberOfItems;                  //@synthesize totalNumberOfItems=_totalNumberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long transferTypes;              //@synthesize transferTypes=_transferTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setItemState:(long long)arg1 ;
-(long long)itemState;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)setTransferTypes:(unsigned long long)arg1 ;
-(unsigned long long)transferTypes;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)representativeTitle;
-(void)setRepresentativeTitle:(NSString *)arg1 ;
-(long long)totalNumberOfItems;
-(void)setTotalNumberOfItems:(long long)arg1 ;
@end

