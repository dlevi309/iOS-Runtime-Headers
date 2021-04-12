/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray;

@interface FCBundleSubscriptionChangeSet : NSObject {

	NSArray* _tagIDsAdded;
	NSArray* _tagIDsRemoved;

}

@property (nonatomic,copy) NSArray * tagIDsAdded;                //@synthesize tagIDsAdded=_tagIDsAdded - In the implementation block
@property (nonatomic,copy) NSArray * tagIDsRemoved;              //@synthesize tagIDsRemoved=_tagIDsRemoved - In the implementation block
-(id)initWithTagIDsAdded:(id)arg1 tagIDsRemoved:(id)arg2 ;
-(NSArray *)tagIDsAdded;
-(void)setTagIDsAdded:(NSArray *)arg1 ;
-(NSArray *)tagIDsRemoved;
-(void)setTagIDsRemoved:(NSArray *)arg1 ;
@end

