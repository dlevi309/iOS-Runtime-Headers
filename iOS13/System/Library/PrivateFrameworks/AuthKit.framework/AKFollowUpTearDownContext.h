/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)akAction;
-(void)setAkAction:(NSString *)arg1 ;
@end

