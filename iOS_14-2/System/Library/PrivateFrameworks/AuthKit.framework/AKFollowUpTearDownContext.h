/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	NSString* _akAction;
	NSString* _altDSID;

}

@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * akAction;                    //@synthesize akAction=_akAction - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)akAction;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAkAction:(NSString *)arg1 ;
@end

