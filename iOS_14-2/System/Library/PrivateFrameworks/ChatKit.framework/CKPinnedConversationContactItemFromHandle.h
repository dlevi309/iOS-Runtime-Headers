/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKPinnedConversationContactItem.h>

@class NSString, CKEntity;

@interface CKPinnedConversationContactItemFromHandle : NSObject <CKPinnedConversationContactItem> {

	CKEntity* _entity;
	double _contentScale;
	long long _contactItemAlignment;

}

@property (nonatomic,retain) CKEntity * entity;                               //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) double contentScale;                             //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) long long contactItemAlignment;                  //@synthesize contactItemAlignment=_contactItemAlignment - In the implementation block
@property (nonatomic,readonly) NSString * contactItemIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntity:(id)arg1 ;
-(void)setEntity:(CKEntity *)arg1 ;
-(CKEntity *)entity;
-(void)setContactItemAlignment:(long long)arg1 ;
-(id)cnContactWithKeys:(id)arg1 ;
-(NSString *)contactItemIdentifier;
-(long long)contactItemAlignment;
-(id)contactItemView;
-(double)contentScale;
-(void)setContentScale:(double)arg1 ;
@end

