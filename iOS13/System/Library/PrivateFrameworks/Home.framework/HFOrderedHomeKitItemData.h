/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSUUID, NSString, NSDate;

@interface HFOrderedHomeKitItemData : NSObject {

	NSUUID* _uniqueIdentifier;
	NSString* _title;
	NSDate* _dateAdded;
	NSString* _actionSetType;

}

@property (nonatomic,copy) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * dateAdded;                     //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,copy) NSString * actionSetType;               //@synthesize actionSetType=_actionSetType - In the implementation block
+(id)dataWithUniqueIdentifier:(id)arg1 title:(id)arg2 dateAdded:(id)arg3 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)actionSetType;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(NSDate *)dateAdded;
-(void)setDateAdded:(NSDate *)arg1 ;
-(void)setActionSetType:(NSString *)arg1 ;
@end

