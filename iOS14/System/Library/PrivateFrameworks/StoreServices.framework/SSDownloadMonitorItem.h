/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(long long)itemState;
-(NSString *)representativeTitle;
-(void)setRepresentativeTitle:(NSString *)arg1 ;
-(long long)totalNumberOfItems;
-(void)setTotalNumberOfItems:(long long)arg1 ;
-(unsigned long long)transferTypes;
-(void)setTransferTypes:(unsigned long long)arg1 ;
-(NSString *)statusString;
-(NSString *)clientIdentifier;
-(void)setStatusString:(NSString *)arg1 ;
-(void)setItemState:(long long)arg1 ;
-(void)dealloc;
@end

