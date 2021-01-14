/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface BLPurchaseResponseItem : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isPurchaseRedownload;
	NSDictionary* _item;
	NSString* _downloadID;
	NSDictionary* _metadata;
	NSString* _purchaseParameters;

}

@property (nonatomic,copy) NSDictionary * item;                        //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * purchaseParameters;              //@synthesize purchaseParameters=_purchaseParameters - In the implementation block
@property (assign,nonatomic) BOOL isPurchaseRedownload;                //@synthesize isPurchaseRedownload=_isPurchaseRedownload - In the implementation block
@property (nonatomic,copy) NSString * downloadID;                      //@synthesize downloadID=_downloadID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)downloadID;
-(id)init;
-(NSDictionary *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setItem:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDownloadID:(NSString *)arg1 ;
-(NSString *)purchaseParameters;
-(BOOL)isPurchaseRedownload;
-(void)setPurchaseParameters:(NSString *)arg1 ;
-(void)setIsPurchaseRedownload:(BOOL)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

