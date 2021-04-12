/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SSVMediaContentTasteItem, NSDate, NSString;

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding> {

	SSVMediaContentTasteItem* _item;
	NSDate* _updateDate;

}

@property (nonatomic,copy) SSVMediaContentTasteItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSDate * updateDate;                          //@synthesize updateDate=_updateDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SSVMediaContentTasteItem *)item;
-(void)setItem:(SSVMediaContentTasteItem *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDate *)updateDate;
-(void)setUpdateDate:(NSDate *)arg1 ;
@end

